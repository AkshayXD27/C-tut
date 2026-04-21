#include <stdio.h>

int main(){
    int number = 0;
    printf("Enter the number: \n");
    scanf("%d\n",&number);
    char name = malloc(number * sizeof(char));
    free(name);
    name = NULL;
}