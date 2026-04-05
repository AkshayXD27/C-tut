#include <stdio.h>

int main(){
    int age = 25;
    float price = 99.99;
    double pi = 3.141592;
    char currency = 'c';
    char tut[] = "learning from bro code";

    printf("%d\n",age);
    printf("%.1f\n",price); // for float
    printf("%.2lf\n",pi); // for double lf = long floating number 
     // .n means the length of numbers tht should be considered or printed
     printf("%c\n",currency); //char
     printf("%s",tut); //string
}