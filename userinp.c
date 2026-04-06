#include <stdio.h>

int main(){
    int age = 0;
    float gpa = 0.0f; // f tells us that it is a floating num
    char grade = '\0'; // it is a null terminator
    char name [30] = ""; // empty string

    printf("Enter ur age : ");
    scanf("%d" , &age); // & address of operator

    printf("Enter your gpa: " );
    scanf("%f",&gpa);

    printf("Enter your grade: ");
    scanf(" %c",&grade);

    printf("Enter your name: ");
    /* scanf(" %s",&name); in this if we type akshay xd it will only print akshay because scanf ignores the spaces when we give space it omits the xd

        gets() it has no limit meaning even tho the size of name is 30 a user can give 100 set of chars hence it lead to memory corruption
    */ 
    fgets(name,sizeof(name),stdin); // string name size and standard input the problem is after click on enter it takes the enter which \n too 

    printf("%d \n",age);
    printf("%.2f \n",gpa);
    printf("%c \n",grade);
    printf("%s \n",name);

}