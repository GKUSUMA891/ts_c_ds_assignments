//swapping without temp using fun
#include <stdio.h>
void swap (int *x,int *y)
{
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
}

int main ()
{
  int num1 = 10, num2 = 20;
  printf ("before swapping %d %d\n", num1, num2);
  swap (&num1, &num2);
printf ("after swapping %d %d\n", num1, num2);
  return 0;
}