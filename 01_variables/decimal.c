#include <stdio.h>

int main() {

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %f\n", gpa); // Your gpa is 2.500000
    //printf("Your gpa is %.1f\n", gpa); // Your gpa is 2.5

    printf("The price is $%f\n", price); // The price is $19.990000
    //printf("The price is $%.2f\n", price); // The price is $19.99
    
    // Alt + 0176 to get symbol (°)
    printf("The temperature is %f°F\n", temperature); // The temperature is -10.100000°F
    //printf("The temperature is %.1f°F\n", temperature); // The temperature is -10.1°F

    return 0; 
}