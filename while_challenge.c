#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n",i);
    }

    puts("Even numbers");
    
    int x;
    x = -10;
    while ( x <= 10)
    {
        printf("%d\n", x);
        x = x + 2;
    }
    

    return 0;
}