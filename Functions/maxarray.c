O#include<stdio.h>
int findmax(int arr[],int n)
{
int max = arr[0];

for(int i = 1; i < n; i++)
{
if(arr[i] > arr[0]){
max = arr[i];
}
}
return max;
}

int main()
{
int arr[] = { 10, 20, 45, 76, 54};
int n = sizeof(arr) / sizeof(arr[0]);
return 0;
}


