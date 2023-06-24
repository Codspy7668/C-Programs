#include<stdio.h>
int main()
{
	int a,b,sum,difference,division,multiply;
	printf("Enter the numbers");
	scanf("%d%d",&a&b);
	sum=a+b;
	printf("The sum of %d and %d is%d",a,b,sum);
	difference=a-b;
	printf("The difference of %d and %d is%d",a,b,difference);
	division=a/b;
	printf("The division of %d and %d is%d",a,b,division);
	multiply=a*b;
	printf("the product of %d and %d is %d ",a,b,multiply);
	return 0;
}
