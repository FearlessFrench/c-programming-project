#include <stdio.h>

int main() {

    // ternary operator ? = shorthand for if-else statements

    // (condition) ? value_if_true : value_if_false;


    /* 1ST EXAMPLE
    int x = 5;
    int y = 6;
    int max = (x > y) ? x : y;

    printf("%d", max);
    */


    /* 2ND EXAMPLE
    bool isOnline = true;

    printf("%s", (isOnline) ? "online" : "offline");
    */


    /* 3RD EXAMPLE
    int number = 8;

    printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");
    */


    /* 4TH EXAMPLE
    int age = 21;
    printf("%s", (age > 18) ? "adult" : "child")
    */


    /* 5TH EXAMPLE
    int hours = 11;
    int minutes = 30;

    printf("%d %d %s", hours, minutes, (hours < 12) ? "AM" : "PM");
    // Let's add zero padding
    printf("%02d:%02d %s", hours, minutes, (hours < 12) ? "AM" : "PM");
    */


    /* 6TH EXAMPLE */
    int hours = 12;
    int minutes = 30;
    // Let's add a pointer
    char *meridiem = (hours < 12) ? "AM" : "PM"

    printf("%02d:%02d %s", hours, minutes, meridiem);

    return 0;
}