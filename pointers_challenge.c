#include <stdio.h>

int main() 
{
    char a, b, c, *p;

    a = 'A';
    p = &a;
    b = *p;
    p = &c;
    *p = 'Z';

    printf("Here are the values, a: %c, b: %c, c: %c",a,b,c);

    return 0;
}