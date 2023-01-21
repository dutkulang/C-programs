#include <stdio.h>

int main(void)
{
    struct robot
    {
	int alive;
	char name[5];
	int xpos;
	int ypos;
	int strength;
    };
    typedef struct robot robot;
    printf("The struct size is %lu\n", sizeof(robot));
    return 0;
}
