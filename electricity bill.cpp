#include<stdio.h>
int main()
{
	int units,rate=7,bill;
	printf("Enter the Units consumed\n");
	scanf("%d",&units);
	bill=units*rate;
	printf("total electricity bill=%d",bill);
	return 0;
	
}
