#include <stdio.h>
#include <math.h>

int main() {
    double principal = 0.0;
    double rate = 0.0;
    int years =0;
    int time = 0;
    double total = 0.0;


    printf("Compound Interest Calculator : \n");
    printf("Enter principal : ");
    scanf("%lf",&principal);
    printf("Enter rate : ");
    scanf("%lf",&rate);
    printf("Enter time : ");
    scanf("%d",&time);
    printf("Enter years : ");
    scanf("%d",&years);
     rate = rate / 100;
     total = principal * pow(1+rate/time,time*years);
    
     printf("total amount = %.2lf",total);

}

// u need gcc -g "compound cal.c" -o "compound cal" -lm