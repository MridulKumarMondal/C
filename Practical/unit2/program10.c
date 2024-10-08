#include<stdio.h>
int main()
/*REAL WORLD PROGRAM V.V.I*/
{
    int a; //a is unit
    float b; // b is a bill amount
    float sc; // sc means sub charge
    float total_bill; // total bill
    float tax; // tax ammount

    printf("enter the unit in ruppes: ");
    scanf("%d",&a);

    if(a<=50)
    {
        b=a*0.50;
    }
    else if(a<=150)
    {
        b=(50*0.50)+(a-50)*0.75;
    }
    else if(a<=250)
    {
        b=(50*0.50)+(100*0.75)+(a-150)*1.20;
    }
    else
    {
        b=(50*0.50)+(100*0.75)+(100*1.20)+(a-250)*1.50;
    }
    sc=b*0.2;
    total_bill=b+sc;

    printf("the total electricity bill is:%.2f\n",total_bill);
    printf("sub charge of electricity bill is:%.2f\n",sc);


    if(total_bill<=400)
    {
        b*0.2;
        printf("no tax");
    }
    else if(total_bill>=600)
    { 
        b*0.25;
        printf("the tax is o.25");
    }
    else
    {
    printf("fatal error! inavlid input");
    }
    return 0;
}