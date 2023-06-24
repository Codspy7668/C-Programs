#include<stdio.h>
 int main()
 {
     int base, exponent, i;
     long power=1;

     printf("Enter base and Exponent: ");
     scanf("%d %d", &base, &exponent);

     for(i=1;i<=exponent;i++)
     {
         power *= base; // power=power*base
     }

     printf("Result = %ld\n",power);

     return 0;
 }
