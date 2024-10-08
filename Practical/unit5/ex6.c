// Printing array elements with pointers:
#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array,Because array name itself is a pointer
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements using pointers:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
