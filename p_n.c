#include <stdio.h>

int main(void)
{
    int n = 0;
    if (n > 0)
    {
        printf("%d is a postive number\n", n);
    }

    else if(n == 0)
    {
        printf("%d is zero\n", n);
    }

    else
    {
        printf("%d is a negative number\n", n);
    }
    return (0);
}