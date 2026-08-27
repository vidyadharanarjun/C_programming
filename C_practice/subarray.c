#include <stdio.h>
int main()
{
int n;
scanf("%d", &n);
int arr[n];
for(int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
int current = arr[0];
int maximum = arr[0];
for(int i = 1; i < n; i++)
{
if(current + arr[i] > arr[i])
current = current + arr[i];
else
current = arr[i];
if(current > maximum)
maximum = current;
}
printf("%d", maximum);
return 0;
}
