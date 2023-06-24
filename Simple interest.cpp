#include<stdio.h>
int main()
{
	float s,p,r,t;
	printf("Enter principal amount\n");
	scanf("%f",&p);
	printf("Enter rate of interest\n");
	scanf("%f",&r);
	printf("Enter time period(in years)\n");
	scanf("%f",&t);
	s=(p*r*t)/100;
	printf("The Simple Interest is %f",s);
	return 0;
}
