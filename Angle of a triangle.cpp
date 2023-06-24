#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first angle of triangle\n");
	scanf("%d",&a);
	printf("Enter the second angle of triangle\n");
	scanf("%d",&b);
	c=180-(a+b);
	printf("Third angle of a triangle is %d",c);
	return 0;
}
