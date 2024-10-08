#include <stdio.h>
int main()
{
    int n,pro=1;

    printf("Enter:");
    scanf("%d", &n);

    int ar[n];

    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d", &ar[i]);
    }

for (int j = 0; j < n; j++)
{
    pro=pro*ar[j];
}
printf("The product is:%d",pro);

}