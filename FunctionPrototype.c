#include <stdio.h>

void hello(char[], int); //this is a function prototype

int main() {
    char name[] = "Roia";
    int age = 21;
    return 0;
}

void hello(char name[], int age) {
    printf("\n Hello %s", name);
    printf("\n I am %d years old", age);
}