#include <stdio.h>

int main(void)
{
    printf("Coverts characters to ASCII\n");

    char mychar;
    scanf("%c", &mychar);
    printf("%c is %i in ASCII\n", mychar, mychar);
    return (0);
}