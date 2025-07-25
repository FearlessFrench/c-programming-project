#include <stdio.h>

int main() {

    // switch = An alternative way to using many if-else statements
    //          More efficient w/ fixed integer values

    //int dayOfWeek = 0;

    printf("Enter a day of the week (Mon, Tue, Wed, Thu, Fri, Sat, Sun): ");
    scanf("%c", &dayOfWeek);

    switch(dayOfWeek){
        case "Mon":
            printf("It is Monday");
            break;
        case "Tue":
            printf("It is Tuesday");
            break;
        case "Wed":
            printf("It is Wednesday");
            break;
        case "Thu":
            printf("It is Thursday");
            break;
        case "Fri":
            printf("It is Friday");
            break;
        case "Sat":
            printf("It is Saturday");
            break;
        case "Sun":
            printf("It is Sunday");
            break;
        default:
            printf("Invalid day of the week! Please enter a number between 1 and 7.");
            break;
    }

    return 0;
}