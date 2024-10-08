#include <stdio.h>
int main()
/*V.V.I PROGRAM*/
{
  int n1, n2, n3;

  printf("enter the numbers:");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 > n2)
  /*outer if.If it becomes true then the program will enter on the second condition*/
  {
    if (n1 > n3)
    /*nested if.Same like the outer if*/
    {
      printf("The number %d is greater", n1);
    }
    else
    {
      printf("the number %d is greater", n3);
    }
  }
  else
  {
    if (n2 > n3)
    {
      printf("the number %d is greater", n2);
    }
    else
    {
      printf("The number %d is greater", n3);
    }
  }
  return 0;
}