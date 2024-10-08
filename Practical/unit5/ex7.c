// How to pass pointers to function:
#include <stdio.h>
void modifyPointer(int **ptr)
{
    // static int val = 20;
    // printf("Address of val: %d\n", &val);
    // printf("value of val: %d\n", val);
    // *ptr = &val;
    // Note: **ptr points to *p inside main so by using the above line we are giving instruction to set the pointing of *p to val through **ptr because **ptr points to *p

    **ptr = 30;
}

int main()
{
    int num = 10;
    int *p = &num;

    printf("Before: %d\n", *p);

    modifyPointer(&p);

    // printf("Address of val: %d\n", p);
    // printf("Value of val inside main: %d\n", *p);
    printf("After: %d", *p);
    return 0;
}

// The commented out code will directly change the pointing of pointer *p
