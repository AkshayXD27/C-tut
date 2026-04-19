#include <stdio.h>

int main(){
    float a = 0.0f;
    float b = 0.0f;
    char op = '\0';
    float res = 0.0f;

    printf("Enter your first number: ");
    scanf("%f",&a);
    printf("Enter your operation(+,-,*,/,%): ");
    scanf(" %c",&op);
    printf("Enter your second number: ");
    scanf("%f",&b);

    switch (op) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        // case '%':
        //     res = a % b;
        //     break;  % doesnt work with float it only works on double and int 
    }

    printf("Result: %.2f",res);
}