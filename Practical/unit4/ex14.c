// find second largest elemnt

#include <stdio.h>
int main()
{
  int ar[5] = {10, 5, 20, 8, 15};

  int firstmax = 0;
  int secondmax = 0;

  for (int i = 0; i < 5; i++)
  {
    if (ar[i] > firstmax)
    {
      secondmax = firstmax;
      firstmax = ar[i];
    }
    else if (ar[i] > secondmax && ar[i] != firstmax)
    {
      secondmax = ar[i];
    }
  }

  printf("The second largest elemnt is:%d", secondmax);

  return 0;
}