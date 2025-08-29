#include <stdio.h>

int main() {

    
    int scores[5]; // This will give garbage values: 8 0 36 0 -193887754
                   // C doesn't automatically clear memory from programs that used that memory previously

    // We should partially set the value
    int scores[5] = {0}; // will be the same as writing: int scores[] = {0, 0, 0, 0, 0}

    for(int i = 0; i < 5; i++){
        printf("%d ", scores[i])
    }

    // Simple way for user input
    printf("Enter a score: "); // 90
    scanf("%d", &scores[0]);

    printf("Enter a score: "); // 80
    scanf("%d", &scores[1]);
    
    printf("Enter a score: "); // 70
    scanf("%d", &scores[2]);
    
    printf("Enter a score: "); // 60
    scanf("%d", &scores[3]);

    printf("Enter a score: "); // 50
    scanf("%d", &scores[4]);
    // >>> 90 80 70 60 50

    // We can use the loop instead!
    int scores[5] = {0};

    for(int i = 0; i < 5; i++){
        printf("Enter a score: ") // Input
        scanf("%d", &scores[i])
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", scores[i]); // Output
    }

    return 0;
}