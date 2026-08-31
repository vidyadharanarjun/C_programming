
#include<stdio.h>
#include<limits.h>
int main()
{
int n,i,largest, a[100];
int largestmin, secondmin;

printf("Enter array elements:");
scanf("%d" ,&n);
for(i = 0; i < n; i++)
scanf("%d" ,& a[i]);
largest = a[0];

for(i = 0; i < n; i++){
if(a[i] > largest){
secondmin = largest;
a[i] > secondmin || a[i] != largest;
a[i]  = secondmin; 
}
}
printf("largest : %d ", largestmin);
printf("secondlargest : %d ", secondmin);
return 0;
}


