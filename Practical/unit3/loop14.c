#include <stdio.h>
int main()
/*loop for swaping first and last digit of a number*/
{
   int num, temp, firstDigit, lastDigit, middleDigit, swap, swappedNumber;

   printf("Enter a number: ");
   scanf("%d", &num);

   if (num < 100)
   {
      temp = num;
      lastDigit = num % 10;

      while (num > 10)
      {
         num = num / 10;
      }
      firstDigit = num;

      swap = lastDigit;

      swap = swap * 10 + firstDigit;

      printf("%d", swap);
   }
   else
   {
      temp = num;
      lastDigit = temp % 10;
      firstDigit = temp / 100;
      middleDigit = (temp / 10) % 10;

      swappedNumber = lastDigit * 100 + middleDigit * 10 + firstDigit;

      printf("Number after swapping first and last digits: %d\n", swappedNumber);
   }

   return 0;
}