/// these are pseduo random numbers

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    // printf("%d",time(NULL)); gives the amt of seconds spent from 1970 
    srand(time(0));
    printf("%d \n",rand()); //pseudo random number
    int max = 6;
    int min = 1;
    int random = (rand() % (max - min)) + min;
    printf("%d",random);
}