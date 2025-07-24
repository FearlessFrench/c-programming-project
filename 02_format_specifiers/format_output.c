#include <stdio.h>

int main() {

    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data is displayed or interpreted.

    // width (specify a minimum character to display)

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);
    //  1
    // 10
    //100

    printf("%4d\n", num1);
    printf("%4d\n", num2);
    printf("%4d\n", num3);
    //   1
    //  10
    // 100

    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n", num3);
    //1
    //10
    //100

    printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n", num3);
    //0001
    //0010
    //0100

    // If a number is positive you'll have a plus sign and vice versa
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);
    //+1
    //+10
    //-100

    return 0;
}