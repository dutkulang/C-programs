#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter int\n");

    scanf("%i", &num);
    printf("You just entered %d whose ASCII value is %c\n", num, num);
    return 0;
}
