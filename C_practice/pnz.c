#include<stdio.h>
int main()
{
	int num, positive, negative, zero;
	printf("Enter the value:");
	scanf("%d" ,&num);

	if(num > 0)
		printf("The  number is postive");
	else if(num < 0)
		printf("The number is negative");
	else
		printf("The number is zero");
	return 0;
}

