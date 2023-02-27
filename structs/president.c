#include <stdio.h>
struct president
{
    char name[40];
    int year;
};
typedef struct president president;
int main()
{
    president first = {"John Garang", 1989};
    printf("%s became president in the year %d\n", first.name, first.year);
    return (0);
}
