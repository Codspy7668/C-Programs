#include<stdio.h>
int main()
{
  float a, b;

  printf("Enter Celsius value: ");
  scanf("%f",&a);

  b = (a * (9.0/5.0)) + 32;

  printf("Fahrenheit value = %.2f", b);

  return 0;
}
