#include <stdio.h>

void change(int a)
{
    a = 50;
}

void main(void)
{
    int num = 10;
    printf("The value of a before %d\n", num);
    change(num);
    printf("The value a after %d\n", num);
}
