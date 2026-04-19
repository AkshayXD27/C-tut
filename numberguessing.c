#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int min = 1;
    int max = 100;
    int random = (rand() % (max - min + 1)) + min ;
    // printf("%d",random);
    int n =0;
    printf("Enter your guess: ");
    scanf("%d",&n);
    if (n == random){
        printf("You got it in the first try\n");
    }
    else {
        int c = 0;
    while (n != random){
        if (n > random){
            printf("Low \n");
            printf("Try again! enter again: ");
        }
        else {
            printf("High \n");
            printf("Try again! enter again: ");
        }
        scanf("%d",&n);
        c++;
    }
    printf("You finally got it\n");
    printf("You took %d attempts",c);
}

}

// Rock paper scissors and banking project left to do