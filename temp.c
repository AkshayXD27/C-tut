#include <stdio.h>
#include <string.h>

int main(){
    char choice = '\0';
    float c = 0.0f; // 0.0f indicates its a floatin number 
    float f = 0.0f;
    float r = 0.0f;
    printf("Enter your choice C / F: ");
    scanf(" %c",&choice);
    if (choice == 'C' || choice == 'c'){ // choice is needed two times because at the first time it checkes if it is 0 or 1 but the second is which just c is always true because we are not checking but giving a pos num instead
        printf("Enter the celsius: ");
        scanf("%f",&c);
        r = (c * 9/5) + 32;
        printf("After converting: %.2f C",r);
    }
    else if (choice == 'F' || choice == 'f'){
        printf("Enter the Fahrenheit: ");
        scanf("%f",&f);
        r = (f - 32) * (5/9);
        printf("After converting: %.2f C",r);
        // if u dont print out the value u get -nan C error
    }
    else {
        printf("Doesnt exist");
    }
}