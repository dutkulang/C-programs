#include <stdio.h>
// void main()
// {
//     char str[5] = {'D','u','t'};
//     int i;
//     for (i = 0; i < 3; i++)
//     {
//         printf("%c\n", str[i]);
//     }
//     // printf("%c\n", str[1]);
// }

void main()
{
    char str[5] = {'D','u','t'};
    int len, i;

    for (len = 0; str[len] != 0; len++);
    {}
    printf("%d\n", len);

    for (i = len; len !< 0; len--)
    {
        printf("%c\n", str[len]);
    }

}
