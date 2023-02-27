#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void)
{
    int n = 3;
    int result = sum(n);
    printf("result = %d\n", result);
    return EXIT_SUCCESS;
}

int sum(int num)
{
    if (num != 0)
    {
	return num + sum(num -1);
    }
    else
    {
	return num;
    }
}
