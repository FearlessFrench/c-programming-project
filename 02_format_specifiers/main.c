#include <stdio.h>

int main() {

    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data is displayed or interpreted.

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = "$";
    char name[] = "Mitsuha Miyamizu"

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    return 0;
}