#include <stdio.h>

int main(void)
{
    int n = 50;
    int *ptr;
    ptr = &n;
    printf("%d\n", n);

    printf("%p\n", &n);
    printf("%u\n", &n);
    
    return 0;
}
