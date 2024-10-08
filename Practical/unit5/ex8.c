// How to use pointers inside function:
#include <stdio.h>
void modifyValue(int *ptr)
{
    *ptr = 20;
}

int main()
{
    int num = 10;
    printf("Before modification: %d\n", num);

    modifyValue(&num);

    printf("After modification: %d\n", num);
    return 0;
}
