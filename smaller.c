#include <stdio.h>

int smaller(int, int, int);

int main(void)
{
    printf("smallest %d\n",smaller(-3,-201,-11));
    return (0);
}

int smaller(int a, int b , int c)
{
    if (a < b)
    {
	if (a < c)
	    return a;
	else
	    return c;
    }
    else
    {
	if (b < c)
	    return b;
	else
	    return c;
    }

}
