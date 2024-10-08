#include <stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter:");
    scanf("%d", &n);

    int ar[n];

    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &ar[i]);
    }

for (int i = 0; i < n; i++)
{
    sum=sum+ar[i];
}
printf("The sum is:%d",sum);

}