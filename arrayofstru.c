#include <stdio.h>

typedef struct {
    char cars[30];
    int year;
    int price;
} cars;

int main(){
    cars c1[] = {{"BMW",2025,400000},{"MERCEDES",2027,9000000}};
    int rows = sizeof(c1) / sizeof(c1[0]);
    for(int i = 0; i<rows;i++){
        printf("%s %d %d\n",c1[i].cars,c1[i].year,c1[i].price);
    }
    
}