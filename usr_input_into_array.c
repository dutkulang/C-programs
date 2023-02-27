#include <stdio.h>

int main(void)
{
  int i, numbers[5];

  for (i = 0; i<5; i++)
    {
      puts("Enter values for numbers array");
      scanf("%d", &numbers[i]);
      printf("%s%d\n", "Numbers = ", numbers[i]);
    }
  //printf("%d", numbers[4]);
  return (0);
}
