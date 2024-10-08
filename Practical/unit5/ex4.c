// Pointer to pointer:
#include <stdio.h>
int main()
{
    int a = 10;

    int *p, **q; // q is a double pointer

    p = &a;
    q = &p;

    printf("Address of a using var: %p\n", &a);
    printf("Address of a using a pointer: %p\n", p);
    printf("Address of p using own var: %p\n", &p);
    printf("Address of p using q pointer: %p\n", q);

    // Changing the value of 'a' using the double pointer
    **q = 20;
    printf("Value of a after modification: %d\n", a);

    return 0;
}
