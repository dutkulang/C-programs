#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "hello";
    char dest[100];

    strcpy(dest, src);
    printf("The destination string is: %s\n", dest);

    return 0;
}
