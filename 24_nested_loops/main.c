#include <stdio.h>

int main() {
    // Without Nested Loop
    // print 1-9, 3 times
    for(int i = 1; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n")

    for(int i = 1; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n")

    for(int i = 1; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n")

    return 0;


    // Nested loop
    for(int i = 1; i < 4; i++){
        for(int j = 1; j < 10; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;


    // Exercise 1
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d ", j)
        }
        printf("\n");
    }

    print 0;


    // Exercise 2
    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &rows);

    printf("Enter the # of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    for(int i = 0; i < columns; i++){
        for(int i = 0; i < columns; i==){
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}