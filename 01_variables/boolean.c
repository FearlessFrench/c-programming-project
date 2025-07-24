#include <stdio.h>
#include <stdbool.h>

int main() {

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    bool isOnline = true;
    //bool isOnline = 1; // 0 if false

    printf("%d", isOnline); // 1

    // boolean are mostly use internally such as if-else statement
    if(isOnline){
        printf("You are ONLINE");
    }
    else{
        printf("You are OFFLINE");
    }


    bool isStudent = true;

    if(isStudent){
        printf("You are a student");
    }
    else{
        printf("You are NOT a student");
    }

    
    bool forSale = 0;
    
    if(isStudent){
        printf("That item is for sale");
    }
    else{
        printf("That item is NOT for sale");
    }


    return 0; 
}