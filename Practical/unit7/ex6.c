// Passing Array to function

#include <stdio.h>
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // SAME AS *(ar+i)
    }
}
int main()
{
    int ar[5] = {1, 2, 3, 4, 5};
    print(ar, 5);
    return 0;
}