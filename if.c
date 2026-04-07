#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    bool isStudent = true;
    if (isStudent) {
        printf("You are a student \n");

    }
    else {
        printf("You are not a student \n");
    }

    char name[30] = "";
    printf("Enter your name :");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';
    if (strlen(name) == 0){
        printf("You didnt enter a name: ");
    }
    else {
        printf("You entered a name and name = %s",name);
    }

}