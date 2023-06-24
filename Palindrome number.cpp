#include<stdio.h>
int main()
{
     int number, remainder, sum=0 ;
     int temp;

     printf("Enter the number : ");
     scanf("%d", &number);

     temp = number;

     while( number!=0 )
     {
         remainder = number % 10;
         sum = sum*10 + remainder;
         number /= 10;
     }

     if ( sum == temp )
         printf("%d is a palindrome number.\n",temp);
     else
         printf("%d is not a palindrome number.\n",temp);

     return 0;
}
