#include <stdio.h>

/*
enum Day{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};*/
// OR I COULD SET NUMBER TO DAYS TOO
typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;

int main() {

    // enum = A user-defined data type that consists
    //        of a set of named integer constants.
    //        Benefit: Replaces numbers with readable names

    //enum Day today = SATURDAY; // 6 
    //printf("%d", today);

    //Day today = TUESDAY;

    if(today == SUNDAY || today == SATURDAY){
        printf("It's the weekend");
    }
    else{
        printf("It's a weekday");
    }

    return 0;
}