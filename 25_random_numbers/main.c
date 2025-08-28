#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main() {

    printf("%d", rand()); // Gives the same random number everytime

    srand(time(NULL)) // or srand(time(0))

    printf("%d", rand()); // Gives random numbers everytime

    printf("%d", RAND_MAX); // Might gives number from over 2 billions
    

    // To get either 0 or 1
    int randomNum = rand() % 2;
    printf("%d", randomNum)

    // To get either 1 or 2
    int randomNum = (rand() % 2) + 1;
    printf("%d", randomNum)


    // Given range random number
    int min = 1; // try 50
    int max = 6; // try 100

    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;
    
    printf("%d %d %d", randomNum1, randomNum2, randomNum3);

    return 0;
}