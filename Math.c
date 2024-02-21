#include <stdio.h>
#include <math.h>

int main() {
    double A = sqrt(7); //squareroot
    double B = pow(2,4); //power

    int radius;
    printf("Welcome to circumference calculater");
    printf("Enter the radius of the circle ");
    scanf("%d", &radius);
    double circumference = 2 * 3.14 * radius;
    printf("The circumference is equals to: %lf", circumference);
    return 0;
}