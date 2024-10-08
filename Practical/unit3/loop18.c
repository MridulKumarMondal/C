#include<stdio.h>
int main()
/*loop for finding palindrom number*/
{
    int n,rem,rev=0;
    
    printf("enter the number:");
    scanf("%d",&n);
     int c=n;
       while (n!=0)
       {
        rem=n%10;
        rev=((rev*10)+rem);
        n/=10;
       }
       
        

        /*This revers logic is same as no 17 i just changed it a little bit if you want you can wrrite as it is just like no 17.*/
       
    

    if(c==rev)
    {
        printf("%d is an palindrom number",c);
    }
    else
    {
        printf("%d is not a palindrom number",c);
    }
    return 0;
}