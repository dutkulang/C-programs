#include <stdio.h>

int main(void)
{
    // char myletter = 'S';
    // printf("myletter holds %c\n", myletter);
    // printf("myletter in bytes is %i\n", myletter);

    printf("----------------------------------------------------------------------------------------\n");
    char ochar;
    printf("Enter a character letter: \n");
    scanf("%c", &ochar);
    printf("You entered %c and its represented in bytes as %i\n", ochar, ochar);
    return (0);
}