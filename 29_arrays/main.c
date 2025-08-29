#include <stdio.h>

int main() {

    // array = A fixed-size collection of elements of the same data type
    //         (Similar to a variable, but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50, 60}; // Each value in an array is called "Element"
    char grades[] = {"A", "B", "C", "D", "E"};
    char name[] = "Zeal";

    printf("%d", numbers);
    printf("%d", numbers[0]); // 10
    printf("%d", numbers[1]); // 20
    printf("%d", numbers[2]); // 30
    printf("%d", numbers[3]); // 40
    printf("%d", numbers[4]); // 50
    printf("%d", numbers[5]); // Out of bounds

    printf("%c", grades[0]); // A
    printf("%c", grades[1]); // B
    printf("%c", grades[2]); // C
    printf("%c", grades[3]); // D
    printf("%c", grades[4]); // E

    printf("%c", name[0]); // Z
    printf("%c", name[1]); // e
    printf("%c", name[2]); // a
    printf("%c", name[3]); // l

    // Another way to create an array
    numbers[0] = 100;
    numbers[1] = 90;
    numbers[2] = 80;
    numbers[3] = 70;
    numbers[4] = 60;

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);
    
    // Try use loop instead
    for(int i = 0; i < 5; i++){
        printf("%c ", grades[i]); // A B C D E
    }

    for(int i = 0; i < 5; i++){
        printf("%c ", name[i]); // Z e a l
    }

    // If we add 60 to numbers array
    for(int i = 0; i < 6; i++){
        printf("%d ", numbers[i]); // 10 20 30 40 50 60
    }

    // For an updated array...
    printf("%d", sizeof(numbers));
    printf("%d", sizeof(numbers[0]));

    // Why don't we do this instead?
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < size; i++){
        printf("%d ", numbers[i]) // Now, we can print any updated arrays!
    }

    // Alternative: one-line code, more condensed but also reduce readability
    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
        printf("%d ", numbers[i])
    }

    return 0;
}