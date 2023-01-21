#include <stdio.h>
    
int main(void)
{
		int a = 100;
		printf("address of a is %x\n", a);
		int *b= &a;
		int **c = &b;
		printf("**c pointer of pointer at the value %d\n", **c);

		return 0;
}
