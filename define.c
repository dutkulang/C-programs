#include <stdio.h>
/**
 * Preprocessing is a process that happens before right the compilation process starts.

Preprocessing replaces all macros with their representive values. 
 * define is used to define a macro
 * define NAME value
 *NAME is whatever name you want to call  
 */

#define NAME "Dut Kulang"

int main(void)
{
    printf("Name: %s\n", NAME);
    return 0;
}
