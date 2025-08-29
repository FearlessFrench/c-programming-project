#include <stdio.h>
#include <string.h>

int main() {

    // Array of String

    char fruits[][10] = {"Apple", "Banana", "Coconut"};

    // It's similar to this
    /*
    char fruit[][10] = {
        {"A", "p", "p", "l", "e", "\0", "\0", "\0", "\0"},
        {"B", "a", "n", "a", "n", "a", "\0", "\0", "\0", "\0"},
        {"C", "o", "c", "o", "n", "u", "t", "\0", "\0", "\0"}
    };
    */

    // To display an arrays of strings, use for loop
    for(int i = 0; i < 3; i++){
        printf("%s\n", fruits[i]); // or printf("%s ", fruits[i])
    }
    
    int size = sizeof(fruits) / sizeof(fruits[0]);
    for(int i = 0; i < size; i++){
        printf("%s\n", fruits[i]); // or printf("%s ", fruits[i])
    }

    
    // Now, think of each string as a row
    // and each character as a column
    char fruits[][10] = {"Apple",
                         "Banana", 
                         "Coconut"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    // let's see if we can change a specific character
    fruits[0][0] = "e";
    fruits[0][4] = "A"
    
    fruits[1][0] = "a";
    fruits[1][5] = "B";

    fruits[2][0] = "t";
    fruits[2][6] = "C";

    for(int i = 0; i < size; i++){
        printf("%s\n", fruits[i]); // or printf("%s ", fruits[i])
    }
    // epplA
    // aananB
    // toconuC


    // EXERCISE
    // We have 3 names, with a maximum size of 25 characters each
    char names[3][25] = {0};

    printf("Enter a name: ");
    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(name[0]) - 1] = "\0";

    printf("Enter a name: ");
    fgets(names[1], sizeof(names[1]), stdin);
    names[1][strlen(name[1]) - 1] = "\0";

    printf("Enter a name: ");
    fgets(names[2], sizeof(names[2]), stdin);
    names[2][strlen(name[2]) - 1] = "\0";
    
    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);

    // Let's use a loop instead
    for(int i = 0; i < 3; i++){
        printf("Enter a name: ");
        fgets(names[i], sizepf(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = "\0"
    }

    for(int i = 0; i < 3; i++){
        printf("%s\n", names[i]);
    }


    // Now for an updated arrays
    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);

    // replace 3 with rows
    for(int i = 0; i < rows; i++){
        printf("Enter a name: ");
        fgets(names[i], sizepf(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = "\0"
    }

    for(int i = 0; i < rows; i++){
        printf("%s\n", names[i]);
    }


    return 0;
}