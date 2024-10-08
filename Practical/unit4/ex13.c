//total number of pairs whose sum is equal to the given number x

#include<stdio.h>
int main()
{
    int a[8]={1,2,3,4,5,6,7,8};
     int totalpairs=0;

     int x=12;

     for (int i = 0; i < 8; i++)
     {
        for (int j = i+1; j < 8; j++)
        {
            if (a[i]+a[j]==x)
            {
                totalpairs++;
            }
            
        }
        
     }
     printf("%d",totalpairs);
     
    return 0;
}