#include<stdio.h>
 int main()
 {
     int number, lastDigit, reverse=0;

     printf("Enter a number: ");
     scanf("%d",&number);

     while( number!=0 )
     {
         lastDigit = number%10;
         reverse = (reverse*10) + lastDigit;
         number /= 10;
     }

     printf("Reverse Number = %d\n",reverse);

     return 0;
 }
