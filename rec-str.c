#include <stdio.h>

int main(void)
{
    char str[]  = "Dut Machour Kulang";
    int i;
    for (i = 0; str[i] != 0; i++)
    {
	printf("str[%d] = %c\n", i, str[i]);
    }
    return (0);
}
