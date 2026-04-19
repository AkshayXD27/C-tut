#include <stdio.h>

int main(){
    int a [] = {10,20,39,45,56,24,213,31,100};
    int size = sizeof(a) / sizeof(a[0]); // size of the whole variable / size of one single variable 
    for (int i=0;i<size;i++){
        printf("%d ",a[i]);
    }

}