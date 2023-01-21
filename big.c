#include <stdio.h>

int greatest(int, int, int);

int main(void)
{
    printf("%d\n", greatest(231,10,24));
    return (0);
}

int greatest(int a, int b, int c)
{
    if (a > b)
    {
	if (a > c)
	{
	    return a;
	}
	else
	{
	    return c;
	}
    }
    else
    {
	if (b > c)
	    return b;
	else
	{
	    return c;
	}

    }


}
