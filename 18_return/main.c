#include <stdio.h>
#include <stdbool.h>

/*
int main() {

    int x = 2 * 2;
    int y = 3 * 3;
    int z = 4 * 4;

    printf("%d\n", x); // >>> 4
    printf("%d\n", y); // >>> 9
    printf("%d\n", z); // >>> 16

    return 0;
}
*/
/*
int square(int num){

void square(int num){
    int result = num * num;
    return result; // to return an int to function square
    // or just one line
    //return num * num
}

    int x = square(2.1);
    int y = square(3.2);
    int z = square(4.3);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
}
*/

/*
double cue(double num){
    return num * num * num;
}

double square(double num){
    return num * num;
}

bool ageCheck(int age){

}

int main() {

    int x = cube(2);
    int y = cube(3);
    int z = cube(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
}
*/

/*
bool ageCheck(int age){

    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}

int main() {

    int age = 21;

    if(ageCheck(age)){
        printf("You may sign up");
    }
    else{
        printf("You must be 18+ to sign up")
    }

    return 0;
}
*/

int getMax(int x, int y){

    if(x >= y){
        return x;
    }
    else{
        return y
    }
}

int main() {

    // return = returns a value back to where you call a function
    
    //int max = getMax(2, 3);
    int max = getMax(4, 5);

    printf("%d", max);

    return 0;
}