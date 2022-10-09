#include <stdio.h>

int main() 
{
    float temps[4] = {74.9, 73.7, 75.8, 78.2};
    int x;

    printf("Local temperatures:/n");
    for (x = 0; x < 4; x++)
    {
        printf("Station %d: %.1f\n",x,temps[x]);
    }

    //sturctures are different types of array

    struct bank
    {
        int account;
        float balance;
    };

    struct bank checking;

    checking.account = 1234;
    checking.balance = 567.89;
    printf("Checking accound %d has a balance of %f\n",
        checking.account,
        checking.balance
    );
    
    struct person
    {
        char name[32];
        int age;
    };

    struct person president = {
        "George washington",
        67
    };
    
    printf("%s was %d years old\n", president.name,president.age);
    
    
    return 0;
}