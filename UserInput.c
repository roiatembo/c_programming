#include <stdio.h>

int main () {

    int age;
    char name[25];
    printf("How old are you?");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    printf("What is your name");
    fgets(name, 25, stdin);

    return 0;
}