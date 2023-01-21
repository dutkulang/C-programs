#include <stdio.h>

void _puts_cursion(char *s)
{
    int i;
    // for (i = 0; s[i] != 0; i++ )
    // {
    //     putchar(s[i]);
    // }
    // printf("\n");
    if (s[i] != 0)
    {   char res = &s[i];
        puts(res);
        i++;
    }
    _puts_cursion(s);
}


int main(void)
{
    char str[] = "Dut";
    _puts_cursion(str);
    return (0);
}