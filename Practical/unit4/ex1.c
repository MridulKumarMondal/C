#include<stdio.h>
int main()
{
    int n;

    printf("Enter:");
    scanf("%d",&n);

    int ar[n];

    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("The elements are:%d\n",ar[j]);
    }
    
    return 0;
}