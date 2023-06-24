#include<stdio.h>
 int main()
 {
   int n, i=1;

   printf("Enter a number: ");
   scanf("%d",&n);
   
   start:
   printf("%d\t",i);
   i++;
   if(i<n) goto start;
   
   return 0;
 }
