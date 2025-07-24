#include <stdio.h>

    // Open File>>Preference//Settings
    // Search code runner, go to Executor Map then select Edit in settings.json
    // "c": "clear && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",

int main() {

    //printf("Hello")
    int age;
    float gpa;
    char grade;
    char name[30];

    // You'll get unidentify behavior (random values)
    // Just make sure you assign a value before printing
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}