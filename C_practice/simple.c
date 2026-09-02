#include<stdio.h>
int main()
{
	float principal, Rate, Time, simple_interst;
	printf("Enter the principal amt:");
	scanf("%f" , &principal);
	printf("Enter the Rate off interst:");
	scanf("%f" , &Rate);
	printf("Enter the Time:");
	scanf("%f" , &Time);

	simple_interst = (principal * Rate * Time) / 100;

	printf("%2.f", simple_interst);
	return 0;
}


