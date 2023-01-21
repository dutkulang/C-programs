#include <stdio.h>

void main(void)
{
  int marks[5], i, sum = 0;
  float avg;

  // Getting the marks
  
  for (i=0; i < 5; i++)
    {
      printf("Enter marks for the students\n");
      scanf("%d", &marks[i]);
    }

  //Working on the marks
  for (i = 0; i < 5; i++)
    {
      // Calculating the sum of marks
      sum = sum + marks[i];
    }
  printf("The sum of all marks is %d\n", sum);

  // calculating the average of all marks for 5 students

  avg = sum / 5;
  printf("The average mark is %.2f", avg);
  printf("%");

}
