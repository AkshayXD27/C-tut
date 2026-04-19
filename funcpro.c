#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // Function prototype
bool Isage(int age); // We are declaring the function before itself so we can use it later in the code or after the main function

int main(){
    hello("spongebob",18);
    if (Isage(18)){
        printf("You can work at here");
    }
}

void hello(char name[], int age) {
    printf("Hello %s\n",name);
    printf("Your age is %d", age);
}

bool Isage(int age){
    return age >= 18;
}