#include <stdio.h>
/**
 * Preprocessing is a process that happens before right the compilation process starts.

Preprocessing replaces all macros with their representive values. 
 * define is used to define a macro
 * define NAME value
 *NAME is whatever name you want to call it. it is advised to use upper case letters / capital letters when naming your macros.  
 *define starts with a hash sign '#' to let the compiler know that you defining a macro
 * NOTE preprocess directives do not end with a semi-colon they are NOT C programs/ they are not part of the C language so there is no need to end them with a semi-colon
 *Because the names of macros get replaced with their responding values, you need to use C format specifiers to let the C compiler the type of data it will be recieving.
 */

#define NAME "Dut Kulang"
#define AGE 22
int main(void)
{
    printf("Name: %s\nAGE: %d\n", NAME, AGE);
    
    return 0;
}
