// user input
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];

    printf("Enter your name:");
    gets(ch);

    printf("%s", ch);

    return 0;
}