#include<stdio.h>
int main()
{
    char c;
    printf("enter the alphabet:");
    scanf("%c",&c);

    switch (c)
    {
    case 'a':
        printf("this is an vowel");
        break;
    case 'e':
        printf("this is an vowel");
        break;
    case 'i':
        printf("this is an vowel");
        break;
    case 'o':
        printf("this is an vowel");
        break;
    case 'u':
        printf("this is an vowel");
        break;
    case 'A':
        printf("this is an vowel");
        break;
    case 'E':
        printf("this is an vowel");
        break;
    case 'I':
        printf("this is an vowel");
        break;
    case 'O':
        printf("this is an vowel");
        break;
    case 'U':
        printf("this is an vowel");
        break;
    
    default:
        printf("this is an consonent");
        break;
    }
    return 0;
}