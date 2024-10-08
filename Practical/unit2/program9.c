#include<stdio.h>
int main()
{
    int bs,gs,hra,da;

    printf("enter your basic salary: ");
    scanf("%d",&bs);
    
    if(bs<=10000)
    {
        hra=bs*0.2;
        da=bs*0.8;
    }
    else if(bs<=20000)
    {
        hra=bs*0.25;
        da=bs*0.9;
    }
    else
    {
        hra=bs*0.3;
        da=bs*0.8;
    }
    gs=bs+hra+da;
    printf("your gross salary is:- %d",gs);
    return 0;
}