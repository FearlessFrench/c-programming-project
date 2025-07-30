#include <stdio.h>

void whoAreyou(){
    printf("\nWho are you?");
    printf("\nWho, who, who, who?");
    printf("\nWho are you?");
    printf("\nWho, who, who, who?");
    printf("\nAre you [name]?\n");
}
//void happyBirthday(char birthdayboi[], int yearOld){
void happyBirthday(char name[], int age){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n, age");
}

int main() {

    // function = A reusable section of code that can be invoked "called"
    //            Arguments can be sent to a function so that it can use them

    /* Functions can print these text multiple times!
    printf("\nWho are you?");
    printf("\nWho, who, who, who?");
    printf("\nWho are you?");
    printf("\nWho, who, who, who?");
    printf("\nYou are [age] years old!\n");

    printf("\nWho are you?");
    printf("\nWho, who, who, who?");
    printf("\nWho are you?");
    printf("\nWho, who, who, who?");
    printf("\nYou are [age] years old!\n");

    printf("\nWho are you?");
    printf("\nWho, who, who, who?");
    printf("\nWho are you?");
    printf("\nWho, who, who, who?");
    printf("\nYou are [age] years old!\n");
    */

    char name[] = "Townsend";
    int age = 25;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1 = '\0']

    printf("Enter your age: ");
    scanf("%d", &age) 

    happyBirthday(name, age);

    return 0;
}