#include <stdio.h>

void main(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum=0;
     while(num!=0)
    {
        sum += num % 10;

        num = num / 10;
    }
    printf("total %d",sum);
}