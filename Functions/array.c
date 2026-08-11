
#include<stdio.h>

void inputarray(int arr[], int n)

{ 
int i;
 printf("Enter the %d array elements:\n", n);
for(i = 0; i < n; i++)
{
 scanf("%d", &arr[i]);
}
}
int main()
{
int arr[100],n,i;

printf("Enter number of elements: ");
scanf("%d",&n);

inputarray(arr,n);

printf("Array elements are: \n");
for(i = 0; i < n; i++)
{
printf("%d",arr[i]);
}
return 0;
}




