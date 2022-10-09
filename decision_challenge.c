#include <stdio.h>

int main() 
{
    int a;

    printf("Enter a number between (1,2,3): ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        puts("Red");
        break;
    case 2:
        puts("Blue");
        break;
    case 3:
        puts("Green");
    
    default:
        puts("Invalid choice");
        break;
    }

    return 0;
}