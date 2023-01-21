#include <stdio.h>
#include <string.h>


int main(void)
{
    char str1[12] = "Hello ";
    char str2[12] = "Dut";

    // copy str2 into str1
    //printf("str1 <--- tr2 = %s\n", strcpy(str1, str2));

    //concat str1 and str2
    printf("str1 + str2 = %s\n", strcat(str1, str2));
    return (0);
}
