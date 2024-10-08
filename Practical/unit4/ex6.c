#include <stdio.h>
void fun(int a[])
{
   int temp=a[0];

   a[0]=a[1];

   a[1]=temp;
}
int main()
{
    int a[2] = {1, 2};

    printf("Before swap:%d %d\n", a[0], a[1]);

    fun(a);
    printf("After swap:%d %d\n", a[0], a[1]);
}

// This program is an example of pass by reference.Whenever we pass array to a function it is alwas passed by reference it means the changes we do inside a function will affect the result inside main function