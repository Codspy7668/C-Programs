#include<stdio.h>
 int main()
 {
   char c;

   printf("Enter any Character: ");
   scanf("%c",&c);
   
   switch(c)
   {
     case 'a'…'z':
     case 'A'…'Z':
           printf("Alphabet\n");
           break;
     case '0'…'9':
           printf("Digits\n");
           break;
     case ' ':
     case '\n':
     case '\t':
     case '\v':
     case '\r':
          printf("White Space\n");
          break;
     default:
          printf("Other\n");
          break;
   }
   
   return 0;
 }
	

