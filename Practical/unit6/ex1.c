//declaring string by character array

#include<stdio.h>
int main()
{
    char ch[5]={'a','b','c','d','\0'};

 
       printf("%s",ch);

       printf("\n");

       for (int i = 0; i < 5; i++)
       {
         printf("%c",ch[i]);
       }
       
   
    
    return 0;
}