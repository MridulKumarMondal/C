#include<stdio.h>
int main()
/*V.V.I PROGRAM*/
{
    int num;

    printf("enter the number: ");
    scanf("%d",&num);
    
    if(num<0)
    {
        printf("this is a negative number:");
    }
    /*if this upper condition becomes true then the program will end here.And if it becomes false then the next condition will aply and vice versa.And if the all conditions becomes false then the else part will ecxecute */
    else if(num==0)
    {
        printf("this is= 0");

    }
    else
    {
        printf("this is a positive number:");
    }
    return 0;
}