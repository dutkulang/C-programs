#include <stdio.h>

int plus(int);

int main(void)
{
    int num1 = 11;
    printf("%d\n", plus(num1));
    return (0);
}

int plus(int x)
{
  // adds one to argument
    return (x+1);

}
