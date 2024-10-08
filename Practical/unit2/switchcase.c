#include<stdio.h>
int main()
/*V.V.I PROGRAM*/
{ 
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        
        printf("this is an invalid number!");
        break;
        /*Break is mandatory,otherwise the program will not  end even after matching result.*/
    case 2:
        printf("this is an invalid number!");
        break;
    case 3:
        printf("this is an invalid number!");
        break;
    case 4:
        printf("this is a valid number");
        break;
    default:
        printf("Fatal error!");
    
    }
    return 0;
}