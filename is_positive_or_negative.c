#include <stdio.h>

int main(void)
{
    int n = 10;
    if (n > 0)
    {
      printf("%d%s\n", n, " is a postive number");
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
