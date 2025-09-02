#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;
}Car;


int main(){

    // array of structs = Array where each element contains a struct {}
    //                    Helps organize and groups together related data

    /*
    Car car1 = {"Mustang", 2025, 32000};
    Car car2 = {"Corvette", 2026, 68000};
    Car car3 = {"Challenger", 2024, 29000};

    printf("%s %d $%d", car1.model, car1.year, car1.price);
    printf("%s %d $%d", car2.model, car2.year, car2.price);
    printf("%s %d $%d", car3.model, car3.year, car3.price);
    */

    // We should store in an array instead
    Car cars[] = {{"Mustang", 2025, 32000},
                  {"Corvette", 2026, 68000},
                  {"Challenger", 2024, 29000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price)
    }

    return 0;
}