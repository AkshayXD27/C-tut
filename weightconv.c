#include <stdio.h>
#include <string.h>

int main(){
    float p = 0.0f; // 0.0f indicates tht the variable is floating type for other user purposes
    float k = 0.0f;
    int c = 0;
    double conv = 0.0;
    double ui = 0.0; //ui = user input
    p = 0.45359;
    k = 2.20462;
    // use double for more precision
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1/2): ");
    scanf("%d",&c);

    if (c == 1){
        printf("Enter the kilogram: ");
        scanf("%lf",&ui); // lf = long floating number
        conv =  ui * k; // kg into pounds 
        printf("After conversion: %.4lf Pounds",conv);
    }
   else if (c == 0){
        printf("Enter the Pounds: ");
        scanf("%lf",&ui); // lf = long floating number
        conv =  ui * p; // pounds into kg
        printf("After conversion: %.4lf Kilogram",conv);
    }
    else {
        printf("Conversion doesnt exist");
    }

}