#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main() {

    // typedef existing_type new_name;

    // You can rename data type to something else like this
    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d", z);


    char name[] = "Mitsuha";

    printf("%s", name);

    // Rename data type from char to Initials
    Initials user1 = "BB";
    Initials user2 = "CV";
    Initials user3 = "DD";
    Initials user4 = "CS";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);
    return 0;
}