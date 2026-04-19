#include <stdio.h>
// #include <windows.h> for windows
#include <unistd.h> // for linux or mac

int main(){
    for (int i = 10; i>=0; i--){
        // Sleep(1000);  for windows time in milliseconds
        sleep(1); // for linux or mac time given in seconds and uses small s
        printf("%d\n",i);
    }
    printf("Happy new year!");
}