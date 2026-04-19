#include <stdio.h>
int main(){
    // for (int i = 0; i<=10; i++){
    //     for(int j=0; j<=10; j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // } prints 1 to 10 10 times

    // for (int i = 1; i<=10; i++){
    //         for(int j=1; j<=10; j++){
    //             printf("%3d",i*j);
    //         }
    //         printf("\n");
    //     }
    
    int rows = 0;
    int cols = 0;
    char sy = '\0';

    printf("Number of rows: ");
    scanf("%d",&rows);
    printf("Number of Columns: ");
    scanf("%d",&cols);
    printf("Enter the symbol: ");
    scanf(" %c",&sy);

    for (int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%c",sy);
        }
        printf("\n");
    }

}