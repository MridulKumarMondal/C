#include<stdio.h>
int main()
{
    int ar[7]={1,2,3,4,5,6,7};

    for (int i = 0; i < 7; i++)
    {
      if (i%2!=0)
      {
        ar[i]=ar[i]*2;
      }
      else
      {
        ar[i]+=10;
      }
    }
    for (int i = 0; i < 7; i++)
    {
       printf("%d\n",ar[i]);
    }
    
    return 0;
}