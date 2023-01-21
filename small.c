#include <stdio.h>

int small(int, int, int);

int main(void)
{
	printf("%d\n", small(21, 12, 0));
    return (0);
}

int small(int a, int b, int c)
{
    if (a < b)
    {
		if (a < c)
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
	if (b < c)
	    return b;
	else
	{
	    return c;
	}

    }

}
