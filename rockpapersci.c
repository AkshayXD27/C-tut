#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computerChoice();
int humanChoice();
void winner(int humanChoice, int computerChoice);



int main(){
    int computer = 0;
    int user = 0;
    computer = computerChoice();
    user =  humanChoice();
    winner(user,computer);
}
    
int computerChoice(){
    
    srand(time(NULL));
    int min = 1;
    int max = 3;
    int computerChoice = 0;
    computerChoice = ( rand() % (max - min + 1 ) + min );
    return computerChoice;
}
int humanChoice() {
    int humanChoice = 0;

    printf("***ROCK PAPER SCISSORS***\n");
    printf("1.ROCK\n2.PAPER\n3.SCISSORS\n");
    scanf("%d",&humanChoice);
    return humanChoice;
}

void winner(int humanChoice, int computerChoice){
    switch (humanChoice) {
        case 1:
            if (computerChoice == 3)
            {
                printf("Computer picked Scissors, you win!");
            }
            else if (computerChoice == 2) {
                printf("Computer picked Paper, you lost!");
            }
            else {
                printf("Computer picked rock, tie!");
            }
            break;
        case 2:
            if (computerChoice == 1){
                printf("Computer picked Rock, you win!");

            }
            else if (computerChoice == 3) {
                printf("Computer picked Scissors, you lost!");
            }
            else {
                printf("Computer picked paper, tie!");
            }
            break;
        case 3: 
            if (computerChoice == 2){
                printf("Computer picked Paper, you win!");
            }
            else if (computerChoice == 1) {
                printf("Computer picked rock, you lost!");
            }
            else {
                printf("Computer picked scissors, tie!");
            }
            break;    
    }
}

