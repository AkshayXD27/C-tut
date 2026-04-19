#include <stdio.h>
#include <stdbool.h>

int main(){
    float price = 10.0;
    bool isStudent = false;
    bool isSenior = true;

    if (isStudent){
        if (isSenior)
        {
            printf("You get a student discount of 10%");
            printf("You get a senior discount of 20%");
            price *= 0.7; // if we do .30 we get discount amount which we have to sub from org price instead of tht we are mult by .7 to get after disc price
        }
        else {
            printf("You get a student discount of 10%");
            price *= 0.9;
        }
    }
    else {
        if (isSenior)
        {
            printf("You get a senior discount of 20%");
            price *= 0.8;
        }
        
    }

    printf("The price of the movie ticket is: $%.2f",price);
}