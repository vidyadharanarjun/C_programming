#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;

	scanf("%d",&n);

	int arr[n];

	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[1]);
	}
	for(i = 0; i < n; i++)
	{
		if(abs(arr[i]-arr[i+1]) !=1)
		{
			printf("Invalid sequence");
			return 0;
		}
		}
		printf("Valid sequence");
		return 0;
	}

