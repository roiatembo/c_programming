#include <stdio.h>

//define a constant in the head to be used throughout the file
#define INPUT_MAX 16
int main() 
{
    const int x = 5; //this is how you declare a constant
    printf("%d squared is %d",x,x*x);

    char input[INPUT_MAX];

    printf("Instructions: ");
    fgets(input, INPUT_MAX,stdin);
    puts("Thank you! Here are your instructions: ");
    puts(input);

    return 0;
}