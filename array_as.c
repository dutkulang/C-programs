#include <stdio.h>

int average(int [], int);

int main(void)
{
    int marks[5] = {90, 65, 82, 59, 60};
    average(marks,5);
    return 0;
}
int average(int marks[], int length)
{
    int i = 0;
    int sum = 0;
    int mean = 0;

    for (i = 0; i < length; i++)
    {
        printf("%d\n", marks[i]);
        sum = sum + marks[i];
    }
    mean = sum/length;
    printf("%d\n", mean);
}