#include <stdio.h>
#include <string.h>

int main() {

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = "\0"; // Remove the newline character

    if(strlen(name) == 0){
        printf("You did not enter a name.\n");
    }
    else if(strlen(name) < 3){
        printf("Your name is too short.\n");
    }
    else if(strlen(name) > 50){
        printf("Your name is too long.\n");
    }
    else{
        printf("Hello, %s", name);
    }
}