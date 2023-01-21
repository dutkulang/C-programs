#include <stdio.h>
/**
 * Preprocessing is a process that happens before right the compilation process starts.

Preprocessing replaces all macros with their representive values. 
 * define is used to define a macro
 * define NAME value
 *NAME is whatever name you want to call it. it is advised to use upper case letters / capital letters when naming your macros.  
 *define starts with a hash sign '#' to let the compiler know that you defining a macro
 */

#define NAME "Dut Kulang"

int main(void)
{
    printf("Name: %s\n", NAME);
    return 0;
}
