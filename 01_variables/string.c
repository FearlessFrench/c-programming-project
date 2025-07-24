#include <stdio.h>

int main() {

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    // In C don't have string but wil use an array of char instead
    char name[] = "アーリャ";
    char food[] = "Tomato and Potato Soup";
    char email[] = "alya@gmail.com"

    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);

    return 0; 
}