// Check Weather the string is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int isPalindrome = 1; // Assume it's a palindrome

    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            isPalindrome = 0;
        }

        // Move towards the middle
        start++;
        end--;
    }

    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
