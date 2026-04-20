#include <stdio.h>

int main(){
    int a [] = {0,13};
    int size = sizeof(a) / sizeof(a[0]); // size of the whole variable / size of one single variable 
    for (int i=0;i<size;i++){
        printf("%d ",a[i]);
    }

}