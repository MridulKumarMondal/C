#include<stdio.h>
int main()
{ 
    int math,phy,chem,totalmarks,mathphy;

    printf("enter the marks of mathematics: ");
    scanf("%d",&math);

    printf("enter the marks of physics: ");
    scanf("%d",&phy);

    printf("enter the marks of chemistry: ");
    scanf("%d",&chem);

    totalmarks=math+phy+chem;
    mathphy=math+phy;
    
    if(math>=65 && phy>=55 && chem>=50)
    {
       if(totalmarks>=180 || mathphy>=140)
       {
        printf("congratulations you are elihghible for admision");
       }
       else
       {
        printf("sorry you are not eeligible for afdmision");
       }
    }
    else
    {
        printf("sorry you are not eligible for admision");
    }

    return 0;
}