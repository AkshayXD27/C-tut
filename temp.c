#include <stdio.h>
#include <string.h>

int main(){
    char choice = '\0';
    float c = 0.0f; // 0.0f indicates its a floatin number 
    float f = 0.0f;
    printf("Enter your choice C / F: ");
    scanf(" %c",&choice);
    if (choice == 'C' || 'c'){
        printf("Enter the celsius: ");
    }
}