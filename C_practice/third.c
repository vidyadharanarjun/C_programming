#include<stdio.h>
int main()
{
	int n , num, i;
	int largest = -99999, second = -99999, third = -99999;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter the elements: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if(num > largest)
		{

		third = second;
		second = largest;
		largest = num;
		}
		else if(num > second)
		{
			third = second;
			second = num;
		}
		else if(num > third)
		{
			third = num;
		}
		printf("Largest = %d\n", largest);
		printf("Second = %d\n", second);
		printf("Third = %d\n" ,third);
	}
	return 0;
}


