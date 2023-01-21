#include <stdio.h>
int main(void)
{

    int var;
    int *ptr;
    int **pptr;

    var = 3000;
    /* Take the address of var */
    ptr = &var;

    /* take the memory address of ptr using the & operator*/
    pptr = &ptr;

    /* take the value using pptr */

    printf("Value of var = %d\n", var);
    printf("Value of *ptr = %d\n", *ptr);
    printf("Value of **pptr = %d\n", **pptr);
}