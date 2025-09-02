#include <stdio.h>

int main(){

    // calloc() = Contiguous Allocation (Clear Allocation).
    //            Allocates memory dynamically and sets all allocated bytes to 0.
    //            malloc() is faster, but calloc() leads to less bugs
    //            malloc(bytes) vs. calloc(#, size)

    /*
    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *scores = malloc(number * sizeof(int));

    if(scores == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("%d ", scores[i]);
    }

    // to free our memory
    free(scores);
    scores = NULL;
    */

    // Enter the number of players: 10
    // 6619244 115 7471184 6750319 6357106 4587629 7077993 7536741 786430 3539000
    
    
    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *scores = calloc(number * sizeof(int));

    // Enter the number of players: 10
    // 0 0 0 0 0 0 0 0 0 0

    if(scores == NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter score #%d: ", i + 1)
        scanf("%d", &number[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%d ", scores[i]);
    }

    // to free our memory
    free(scores);
    scores = NULL;

    // Enter the number of players: 10
    // Enter score #1: 10
    // Enter score #2: 20
    // Enter score #3: 30
    // Enter score #4: 40
    // Enter score #5: 50
    // Enter score #6: 60
    // Enter score #7: 70
    // Enter score #8: 80
    // Enter score #9: 90
    // Enter score #10: 100
    // 10 20 30 40 50 60 70 80 90 100

    return 0
}