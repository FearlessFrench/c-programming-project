#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); //function prototype

int main() {

    // function prototype = Provide the complier w/ information about a function's:
    //                      name, return type, and parameters before its actual definition.
    //                      Enables type checking and allows functions to be used before
    //                      they're defined.
    //                      Improves readability, organization, and helps prevent errors.

    hello("Sakuta", 18);

    if(ageCheck 18){
        printf("You are old enough to work at Domino's")
    }
    else{
        printf("You must be 16+ to work at Domino's")
    }

    return 0;
}

void hello(char name[], int age){
    printf("Konnichiwa %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    return age >= 16;
}