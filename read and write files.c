#include <stdio.h>

int main(){
    FILE *pFile = fopen("test.txt","w"); //FILE is a built in structure inside stdio.h
    char txt[] = "FAHHHHHHHHHHHH";
    if (pFile == NULL){
        printf("Something went wrong");
        return 1;
    }
    fprintf(pFile,"%s",txt);
    printf("Printed sucessfully");
    fclose(pFile);
}