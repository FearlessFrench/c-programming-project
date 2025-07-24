#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = "\0";
    char name[30] = "";

    // scanf - for user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    // Add a space to clear the input buffer from gpa
    // " %c" this tell our program to skip over that new line character
    printf("Enter your grade: ");
    scanf(" %c", &grade);

    //printf("Enter your first name: ")
    //scanf("%s", &name);
    
    getchar(); // another method of clearing a new line character with an input buffer
    printf("Enter your full name: ") // Will get only first name because scanf stops when encountering a space
    fgets(name, sizeof(name), stdin);
    // We also need to get rid of the new character after name input too
    // name = "French\n" <<< Input Buffer
    // call #include <string.h>
    name[strlen(name) - 1] = "\0";

    // My Input
    // Enter your age: 21
    // Enter your gpa: 3.8
    // Enter your grade: A
    // Enter your full name: Mitsuha Miyamizu

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}