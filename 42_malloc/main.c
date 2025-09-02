#include <stdio.h>
#include <stdlib.h>

int main() {

    // malloc() = A function in C that dynamically allocates
    //            a specified number of bytes in memory

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    // This won't work with pointers
    //int size = sizeof(grades) / sizeof(grades[0]) 

    // to prevent segmentation fault 
    /*A segmentation fault occurs when a program attempts to
      access a memory location that it is not allowed to access, or
      attempts to access a memory location in a way that is not
      allowed (for example, attempting to write to a read-only
      location, or to overwrite part of the operating system).*/
    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter grade #%d", i + 1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }

    free(grades); // returning "rented" space back to the OS
    grades = NULL; // avoids dangling pointers

    // USER INPUT
    // Enter the number of grades: 10
    // Enter grade #1: A
    // Enter grade #2: B
    // Enter grade #3: C
    // Enter grade #4: D
    // Enter grade #5: F
    // Enter grade #6: A
    // Enter grade #7: B
    // Enter grade #8: C
    // Enter grade #9: D
    // Enter grade #10: F

    // OUTPUT
    // A B C D F A B C D F

    return 0;
}