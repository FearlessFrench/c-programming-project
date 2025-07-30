#include <std.h>
#include <stdbool.h>

int main() {
    
    float price = 10.00;
    bool isStudent = true; // A student gets 10% discount
    bool isSenior = true; // A senior gets 20% discount

    // student = $9
    // senior = $8
    // student + senior = $7

    // Nested if statements
    if(isStudent){
        if(isSenior){
            printf("You get a student discount of 10%\n");
            printf("You get a senior discount of 20%\n");
            price *= 0.7
        }
        else{
            printf("You get a student discount of 10%\n");
            price *= 0.9;
        }
    }
    else{
        if(isSenior){
            printf("You get a senior discount of 20%\n");
            price *= 0.8;
        }
    }



    printf("The price of a ticket is: $%.2f\n", price);

    return 0;
}