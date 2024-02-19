#include <stdio.h>

int main() {
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    const float PI = 3.14159; //how to declare a constant variable in c

    printf("Item 1: $%.2f\n", item1); //only displays 2 digits
    printf("Item 2: $%8.2f\n", item2); //minimum field width
    printf("Item 3: $%-8.2f\n", item3);//left align
    return 0;
}