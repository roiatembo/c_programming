#include <stdio.h>
#include <string.h>
int main() 
{
    char first[] = "I woould like to go";
    char second[] = "from here to there\n";
    char buffer[64];

    strcpy(buffer,first);
    strcat(buffer,second);
    puts(buffer);

    return 0;
}