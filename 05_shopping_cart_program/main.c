#include <stdio.h>
#include <string.h>

int main() {

    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = "$";
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = "\0"; // This should get rid of a new line character

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ")
    scanf("%d", &quantity);

    total = price + quantity;

    printf("\nYou have bought %d %s\n" quantity, item);
    printf("%c%.2f", currency, total); // You can use multiple format specifiers in the same line
    return 0;
}
