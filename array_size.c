#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[] = "Hello, world";
    printf("The size of %s is %lu\n", string, sizeof(string));
    printf("the length of %s is %d", string, strlen(string));
    return 0;
}
