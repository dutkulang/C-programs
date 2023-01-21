#include <stdio.h>
int main(void)
{
  int i, num[5] = {12,22,32,42,52};
  
  for (i = 4; i >= 0; i--)
    {
      printf("%d\n", num[i]);
    }
  return (0);
}
