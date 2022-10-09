#include <stdio.h>

int main() 
{
    char password[] = "spatula";

    printf("The password is %s\n",password);

    char input[64]; //can only allow 63 characters

    printf("Instructions");
    fgets(input,64,stdin);
    puts("Thank you! Here are your instructions: ");
    puts(input);

    return 0;
}