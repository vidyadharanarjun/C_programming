#include<stdio.h>
int main()
{
	int arr[100],i,n;
	int largest, second_largest; 
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	printf("Enter the array elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	largest = arr[0];
	second_largest = -1;

	for(i=0; i<n; i++)
			{
				if (arr[i] > largest)
				{
					second_largest = largest;
					largest = arr[i];
				}

					else if (arr[i] > second_largest && largest != arr[i])
					{
						second_largest = arr[i];
					}
				}

				printf("Largest number = %d\n", largest);
				printf("Second_largest = %d\n", second_largest);

				return 0;
}
