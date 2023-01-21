#include <stdio.h>

int main()
{
    void greet(char *name)
    {
	printf("Hello %s\n", name);
    }

    int add(int x, int y)
    {
	return x + y;
    }
    printf("%c\n", add(58,7));
    greet("Dut");
    return 0;
}
