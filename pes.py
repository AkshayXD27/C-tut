import tkinter as tk
from tkinter import messagebox
import requests
import urllib3

# Suppress insecure request warnings 
urllib3.disable_warnings(urllib3.exceptions.InsecureRequestWarning)

class WiFiAutoLogin:
    def __init__(self, root):
        self.root = root
        self.root.title("College WiFi Auto-Login")
        self.root.geometry("300x300") # Slightly taller to fit the new button
        self.root.resizable(False, False)

        # Setup a session to disguise as a browser
        self.session = requests.Session()
        self.session.headers.update({
            'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36'
        })
        
        # Cyberoam/Sophos standard login endpoint
        self.auth_url = "https://rr.pes.edu:8090/login.xml"
        self.is_logged_in = False
        self.active_srn = "" # Save SRN securely for logout

        self.setup_gui()

        # Bind the window close event to the logout function
        self.root.protocol("WM_DELETE_WINDOW", self.on_closing)

    def setup_gui(self):
        # SRN Label and Entry
        tk.Label(self.root, text="SRN:").pack(pady=(20, 5))
        self.srn_entry = tk.Entry(self.root, width=30)
        self.srn_entry.pack()

        # Password Label and Entry
        tk.Label(self.root, text="Password:").pack(pady=(10, 5))
        self.password_entry = tk.Entry(self.root, show="*", width=30)
        self.password_entry.pack()

        # Status Label
        self.status_label = tk.Label(self.root, text="Status: Disconnected", fg="red")
        self.status_label.pack(pady=10)

        # Connect Button
        self.connect_btn = tk.Button(self.root, text="Connect", command=self.login, width=15)
        self.connect_btn.pack(pady=5)

        # Force Logout Button (for ghost sessions)
        self.force_out_btn = tk.Button(self.root, text="Force Logout / Clear Session", command=self.force_clear_session, width=25)
        self.force_out_btn.pack(pady=5)

    def force_clear_session(self):
        # This function kills stuck ghost sessions on the server
        srn = self.srn_entry.get().strip()
        
        if not srn:
            messagebox.showwarning("Input Error", "Please enter your SRN to clear the session.")
            return

        self.status_label.config(text="Clearing ghost session...", fg="orange")
        self.root.update()

        data = {
            "mode": "193", # 193 is the logout code
            "username": srn,
            "producttype": "0"
        }
        
        try:
            # Blindly send the logout request to clear any stuck sessions
            self.session.post(self.auth_url, data=data, verify=False, timeout=5)
            self.status_label.config(text="Session cleared! Try connecting.", fg="blue")
        except requests.exceptions.RequestException as e:
            self.status_label.config(text="Network Error", fg="red")
            messagebox.showerror("Error", f"Could not reach the server to log out.\n{e}")

    def login(self):
        srn = self.srn_entry.get().strip()
        password = self.password_entry.get().strip()

        if not srn or not password:
            messagebox.showwarning("Input Error", "Please enter both SRN and Password.")
            return

        self.status_label.config(text="Connecting...", fg="orange")
        self.root.update()

        data = {
            "mode": "191", # 191 is the login code
            "username": srn,
            "password": password,
            "producttype": "0"
        }

        try:
            # verify=False is necessary for local IP/domain captive portals
            response = self.session.post(self.auth_url, data=data, verify=False, timeout=10)
            
            # --- DEBUGGING PRINTS ---
            print("URL Sent:", response.request.url)
            print("\nHEADERS SENT:")
            for key, value in response.request.headers.items():
                print(f"{key}: {value}")
            print("\nBODY SENT:")
            print(response.request.body)
            print("\nSERVER RESPONSE:")
            print(response.text)
            print("-" * 40)
            # ------------------------
            
            try:
                requests.get("https://8.8.8.8", timeout=3, verify=False)
                
                self.is_logged_in = True
                self.active_srn = srn
                self.status_label.config(text="Status: Connected", fg="green")
                self.connect_btn.config(state=tk.DISABLED)
                self.srn_entry.config(state=tk.DISABLED)
                self.password_entry.config(state=tk.DISABLED)
                
            except requests.exceptions.RequestException:
                self.status_label.config(text="Status: Device Limit Reached", fg="red")
                messagebox.showerror(
                    "Login Blocked", 
                    "You are likely logged in on another device (like your phone) or have a ghost session. "
                    "Try clicking 'Force Logout', or disconnect your phone's WiFi."
                )
                
        except requests.exceptions.RequestException as e:
            self.status_label.config(text="Status: Network Error", fg="red")
            messagebox.showerror("Connection Error", f"Could not reach the captive portal. Are you connected to the WiFi?\n\nDetails: {e}")

    def logout(self):
        if self.is_logged_in:
            data = {
                "mode": "193", # 193 is the logout code
                "username": self.active_srn,
                "producttype": "0"
            }
            try:
                # Send the logout request quietly
                self.session.post(self.auth_url, data=data, verify=False, timeout=5)
                print("Logout request sent successfully.")
            except requests.exceptions.RequestException:
                pass # Fail silently on exit if the network is already dropped

    def on_closing(self):
        # Trigger the logout sequence when the window X button is clicked
        self.logout()
        self.root.destroy()

if __name__ == "__main__":
    root = tk.Tk()
    app = WiFiAutoLogin(root)
    root.mainloop()