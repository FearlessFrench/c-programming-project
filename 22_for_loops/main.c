#include <stdio.h>
#include <windows.h> // For Windows
#include <unistd.h> // For Linux or Mac

int main() {

    // for loop = Repeat some code a limited # of times
    //            for(Initialization; Condition; Update)


    // Start at 1, Addition by 1
    for(int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }

    // Start at 2, Addition by 2
    for(int i = 2; i <= 10; i++2){
        printf("%d\n", i);
    }

    // Start at 10, Negative by 3
    for(int i = 10; i >= 0; i-=3){
        printf("%d\n", i);
    }

    // Count Down Numbers
    // If you're on Windows type "Sleep()"
    // If you're on Linux / Mac type "sleep()"
    for(int i = 10; i >= 0; i--){
        Sleep(1000); // 1000 milisecond = 1 seconds
        printf("%d\n", i);
    }

    printf("HAPPY BIRTHDAY!")
    
    return 0;
}