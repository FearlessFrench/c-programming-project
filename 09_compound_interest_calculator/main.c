#include <stdio.h>
#include <math.h>

int main() {

    // COMPOUND UNTEREST CALCULATOR

    double principal = 0.0; // Initial amount
    double rate = 0.0; // Interest rate in percentage
    int years = 0; // Number of years
    int timesCompounded = 0; // Number of times interest is compounded per year
    double total = 0.0; // Total amount after interest

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P):");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter # of times compoounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1 + rate / timesCompounded), timesCompounded * years);

    print("After %d years, the total will be $%.2lf", years, total);q

    return 0;
}