#include <stdio.h>

int sum(int num)
{
    if (num != 0)
    {
        return num + sum(num-1);
        
    }
    else
    {
        return (0);
    }
    
}


int main(void)
{   int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = sum(num);
    printf("The sum = %d\n", result);
    return (0); 

}