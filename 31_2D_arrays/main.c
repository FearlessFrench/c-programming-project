#include <stdio.h>

int main() {

    // 2D array = An array where each element is an array
    //            array[][] = {{}, {}, {}};

    // Don't forget to input columns count! Otherwise, C will give an error
    int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    printf("%d ",  numbers[0][0]);
    printf("%d ",  numbers[0][1]);
    printf("%d\n", numbers[0][2]);
    // >>> 1 2 3
     
    printf("%d ",  numbers[1][0]);
    printf("%d ",  numbers[1][1]);
    printf("%d\n", numbers[1][2]);
    // >>> 4 5 6

    printf("%d ",  numbers[2][0]);
    printf("%d ",  numbers[2][1]);
    printf("%d\n", numbers[2][2]);
    // >>> 7 8 9

    int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}
                        {10, 11, 12}};

    // Or use for loop to print 2D arrays
    for(int i = 0; i < 4; i++){ // rows
        for(int j = 0; j < 3; j++){ // columns
            printf("%d ", numbers[i][j]);
        }
        printf("\n")
    }


    // Telephone Numbers Pad
    char numpad[][3] = {{"1", "2", "3"},
                        {"4", "5", "6"},
                        {"7", "8", "9"},
                        {"*", "0", "#"}};

    for(int i = 0; i < 4; i++){ // rows
        for(int j = 0; j < 3; j++){ // columns
            printf("%c ", numbers[i][j]);
        }
        printf("\n")
    }
}