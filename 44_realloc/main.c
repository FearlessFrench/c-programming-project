#include <stdio.h>
#include <stdlib.h>

int main(){

    // realloc() = Reallocation.
    //             Resize previously allocated memory
    //             realloc(ptr, bytes)

    
    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    /*
    // prevent segmentaion fault
    if(prices == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter price #%d: ", i + 1);
        scanf("%f", prices[i]);
    }

    for(int i = 0; i < number; i++){
        printf("$%.2f ", prices[i]);
    }

    // to free our memory
    free(prices);
    prices = NULL;

    */

    // Enter the number of prices: 5
    // Enter price #1: 1.99
    // Enter price #2: 2.99
    // Enter price #3: 3.99
    // Enter price #4: 4.99
    // Enter price #5: 5.99
    // $1.99 $2.99 $3.99 $4.99 $5.99

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));

    if(temp == NULL){
        printf("Could not reallocate memory!\n");
    }
    else{
        prices = temp;
        temp = NULL;

        for(int i = number; i < newNumber; i++){
            printf("Enter price #%d: ", i + 1);
            scanf("$%.2f ", prices[i]);
        }
    }

    for(int i = 0; i < number; i++){
        printf("$%.2f ", prices[i]);
    }

    free(prices);
    prices = NULL;

    // Enter the number of prices: 5
    // Enter price #1: 1.99
    // Enter price #2: 2.99
    // Enter price #3: 3.99
    // Enter price #4: 4.99
    // Enter price #5: 5.99
    // Enter the number of prices: 10 (Reallocation)
    // Enter price #6: 6.99
    // Enter price #7: 7.99
    // Enter price #8: 8.99
    // Enter price #9: 9.99
    // Enter price #10: 10.99
    // $1.99 $2.99 $3.99 $4.99 $5.99 $6.99 $7.99 $8.99 $9.99 $10.99

    // Enter the number of prices: 5
    // Enter price #1: 1.99
    // Enter price #2: 2.99
    // Enter price #3: 3.99
    // Enter price #4: 4.99
    // Enter price #5: 5.99
    // Enter the number of prices: 3 (Reallocation)
    // $1.99 $2.99 $3.99

    return 0;
}