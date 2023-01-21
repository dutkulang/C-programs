#include <stdio.h>

int main(void)
{
  int i, numbers[5];

  for (i = 0; i<5; i++)
    {
      printf("Enter values for numbers array\n");
      scanf("%d", &numbers[i]);
      printf("Numbers = %ls", numbers);
    }
  //printf("%d", numbers[4]);
  return (0);
}
