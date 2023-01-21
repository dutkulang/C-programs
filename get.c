#include <stdio.h>
#include <string.h>

/**
 * i should find out why gets in considered as a dangerous function and shouldn't be used.
*/

int main(void)
{
    char name[20];

    printf("What is your name? ");
    gets(name);
    printf("Hello %s, how are you doing???\n Did you know that your name has %d characters in it?\n", name, strlen(name));
    return (0);
}