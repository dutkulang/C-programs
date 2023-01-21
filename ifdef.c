#include <stdio.h>
#include <stdlib.h>

/**
 *Using the ifdef, ifndef preprocessor terms.
 *ifdef => if defined
 *ifndef => if not defined
 *Every `if` preprocessor statement must have an `endif` to tell the compiler that the if statement has terminated.
 */

//#define NAME "Dut Kulang"

int main(void)
{
    #ifdef NAME
	printf("Hello %s\n", NAME);
    #endif

    #ifndef NAME
	printf("Hello user!!\n");
    #endif
    return EXIT_SUCCESS;
}
