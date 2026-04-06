#include <stdio.h>
#include <string.h>

int main() {
    char item[50] = "";
    char currency = '$';
    int quantity = 0;
    float price = 0.0f,total = 0.0f; //f is to tell devs that it is a floating val
    printf("Enter the item name: ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item) -1 ] = '\0';

    printf("Enter the quantity: ");
    scanf("%d",&quantity);

    printf("Enter the price of the item: ");
    scanf("%f",&price);

    total = price * quantity;
    
    printf("The total bill is: %c%.2f for %s/s",currency,total,item);



}