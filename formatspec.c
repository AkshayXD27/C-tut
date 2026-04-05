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
     printf("%s\n",tut); //string
     int a = 1 ,b = 10 ,c = 100;
     printf("%4d\n",a); // 4d means the number of char / space assigned to the left side 
     printf("%-4d\n",b); // space assigned to right side
     printf("%04d\n",c); //instead of space it will be filled by 0
        c = - 100;     
     printf("%+d\n",a); 
     printf("%+d\n",b); 
     printf("%+d\n",c);  // prints + if num is pos - if neg
}