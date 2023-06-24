#include<stdio.h>
int main()
{
  float a, b, c, max;
  printf("Enter three numbers: ");
  scanf("%f %f %f",&a, &b, &c);
  max = (a>b && a>b)? a: (b>a && b>c)? b:c;
  printf("Maximum number = %.2f",max);
  return 0;
}
