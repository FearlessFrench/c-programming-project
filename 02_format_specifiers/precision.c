#include <stdio.h>

int main() {

    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data is displayed or interpreted.

    // precision

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    // "%.2f" to display 2 digit of the decimal
    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    // width + precision + flag
    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;
}