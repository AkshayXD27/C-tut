#include <stdio.h>
#include <unistd.h>
int Balance(int* Balance);
int Deposit(int* Balance);
int Withdraw(int* Balance);

int main(){
    int bal = 200000;
    int UserInput = 0;
    printf("Welcome to Swiss Bank\n");
    do {
        printf("\nSelect an option: \n");
        printf("\n1. Check Balance\n2. Withdraw Money \n3. Deposit Money \n4. Exit\n");
        scanf ("%d",&UserInput);
        sleep(1);
        switch (UserInput)
        {
        case 1:
            Balance(&bal);
            break;
        case 2: 
            Withdraw(&bal);
            break;
        case 3:
            Deposit(&bal);
            break;
        default:
            printf("Thanks for banking with us");
            break;
        }
    }while(UserInput != 4);
}

int Balance(int* Balance) {
    printf("Your Current Balance Is: %d\n",*Balance);
    return 0;
}

int Deposit(int* Balance) {
    int amt = 0;
    printf("Enter the amount you wish to deposit: ");
    scanf("%d",&amt);
    *Balance += amt;
    sleep(5);
    printf("Money Deposited Successfully \n");
    
}

int Withdraw(int* Balance) {
    int amt = 0;
    printf("Enter the amount you wish to withdraw: ");
    scanf("%d",&amt);
    if (*Balance < amt){
        printf("Balance not sufficent");
    }
    else {
        *Balance -= amt;
    }
    sleep(5);
    printf("Money Withdrawen Successfully \n");
}