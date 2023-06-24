#include<stdio.h>
 int main()
 {
     int number, c=0;

     printf("Enter a number: ");
     scanf("%d",&number);

     while (number!=0)
     {
       c++;
       number= number/10;
     }

     printf("Number of digits =  %d\n",c);

     return 0;
 }
