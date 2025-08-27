#include <stdio.h>
#include <stdbool.h>

int main() {

    // while loop = Continue some code WHILE the condition remains true
    //              Condition must be true for us to enter while loop

    // Infinite Loop
    while(1 == 1){
        printf("HELP! I'M STUCK IN A LOOP")
    }

    // Limit Loop
    int number = 0;

    while (number <= 0){
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    }

    // Alternatives
    do{
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    }while(number <= 0);

    // Use input (What is your name?)
    char name[50] = "";

    while(strlen(name) == 0){
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    
    printf("Hello %s", name);

    return 0;

// While Boolean
int main() {

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing Battlefield™ 6\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }
    printf("You exit the game")

    return 0;
}

    
}