#include <stdio.h>

int main() {
    
    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // !  = NOT

    int temp = 0;
    /*
    if(temp > 0){
        printf("The temperature is GOOD");
    }
    else if(temp < 30){
        printf("The temperature is GOOD");
    }
    else{
        printf("The temperature is BAD");
    }
    */


    // && = AND (INTERNAL RANGE)
    if(temp > 0 && temp < 30){
        printf("The temperature is GOOD");
    }
    else{
        printf("The temperature is BAD");
    }

    
    // || = OR (EXTERNAL RANGE)
    if(temp <= 0 || temp >= 30){
        print("The temperature is BAD");
    }
    else{
        printf("The temperature is GOOD")
    }
    

    // ! = NOT (INVERSE BOOLEAN)
    bool isSunny = true;

    if(!isSunny){
        printf("It is CLOUDY outside");
    }
    else{
        printf("It is SUNNY outside")
    }
    

    return 0;
}