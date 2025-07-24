#include <stdio.h>

int main() {

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    int age = 25.5; // will be automatically truncate to 25
    int year = 2025;
    int quantity = 1; // quantity always be whole number

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity)

    return 0;
}