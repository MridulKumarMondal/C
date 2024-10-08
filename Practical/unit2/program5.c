#include<stdio.h>
int main()
{
    char ch;

    printf("enter the chracter:");
    scanf("%c",&ch);
    
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
     printf("%c is a chracter",ch);
    }
    else if(ch>=0 && ch<=9)
    {
        printf("%c is an digit",ch);
    }
    else
    {
        printf("this is an special charecter");
    }
    return 0;
}