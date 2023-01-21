#include <stdio.h>

int main(void)
{
	char str[17] = "Dut ";
	int len;
	
	for(len = 0; str[len] != 0; len++)
	{
		char s = str[len];
		printf("%c\n", s);
	}
	printf("the length of the word %s is %d\n", str, len);
}
