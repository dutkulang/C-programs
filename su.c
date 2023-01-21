#include <stdio.h>

void change(int a)
{
    a = 50;
}

void main(void)
{
    int num = 10;
    int *num_ptr = &num;


    
    printf("The value of a before %d\n", num);
    change(*num_ptr);
    printf("The value a after %d\n", num);
}
