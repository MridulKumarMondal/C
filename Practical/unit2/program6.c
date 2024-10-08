#include<stdio.h>
int main()
{
    char ch;

    printf("enter the chracter:");
    scanf("%c",&ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("this is an vowel");
    }
    else if(ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("this is an vowel");
    }
    else
    {
        printf("this is an consonent");
    }
    return 0;
}