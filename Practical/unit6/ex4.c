// program to reverse a string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        // Swap characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
