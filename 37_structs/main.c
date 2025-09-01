#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Structs are custom container that hold multiple pieces of related information!
// it's very similar to Object-Oriented Programming in other languages

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student)

int main() {

    Student student1 = {"Mitsuha", 17, 3.5, true};
    Student student2 = {"Taki", 17, 3.3, true};
    Student student3 = {"Mai", 20, 3.2, false};
    Student student4 = {0}; // To reset struct's memory

    strcpy(student4.name, "Masachika");
    student4.age = 16;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printStudent(student1)
    printStudent(student2)
    printStudent(student3)
    printStudent(student4)

    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %d\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}