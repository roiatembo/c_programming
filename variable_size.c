#include <stdio.h>

int main() 
{
    char a;
    short b;
    int c;
    long d;
    float e;
    double f;

    printf("A char variable occupies %lu bytes of storage\n",sizeof(a));
    printf("A short variable occupies %lu bytes of storage\n",sizeof(b));
    printf("A int variable occupies %lu bytes of storage\n",sizeof(c));
    printf("A long variable occupies %lu bytes of storage\n",sizeof(d));
    printf("A float variable occupies %lu bytes of storage\n",sizeof(e));
    printf("A double variable occupies %lu bytes of storage\n",sizeof(f));

    struct stuff
    {
        int a;
        float b;
        char c[32];
    };

    printf("The structure 'stuff' occupies %lu bytes of storage\n",sizeof(struct stuff));

    //memory address
    puts("Memory Allocations");
    printf("A is at %p\n", &a);
    printf("B is at %p\n",&b);
    printf("C is at %p\n",&c);
    

    return 0;
}