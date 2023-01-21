#include <stdio.h>
/*
 * greatest checks whihch is the greatest number among 3 number

*/
int greatest(int a, int b, int c);

int main(void)
{
    printf("greatest number: %d\n", greatest(-1,-1,-2));

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
	if (b>c)
	{
	    return b;
	}
	else
	{
	    return c;
	}
    }

}
