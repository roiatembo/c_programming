#include <stdio.h>

void evaluate(int a);

int main() 
{
    int input;
    printf("Enter any number: \n");
    scanf("%d", &input);
    evaluate(input);

    return 0;
}

void evaluate(int a)
{
    if (a > 10)
    {
        printf("%d is greater than 10\n", a);
    }
    else if (a < 10)
    {
        printf("%d is less than 10\n",a);
    }
    else
    {
        printf("%d is equal to 10\n",a);
    }
    
    
}