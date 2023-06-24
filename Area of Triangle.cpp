#include<stdio.h>
int main()
{
	int base,height,Area;
	printf("Enter the base of triangle\n");
	scanf("%d",&base);
	printf("Enter the height of triangle\n");
	scanf("%d",&height);
	Area=0.5*base*height;
	printf("The area of triangle is %d\n",Area);
	return 0;
}
