#include<stdio.h>
int main()
{
int n, i, Readings;
printf("Enter the number of readings");
scanf("%d" ,&n);
for(i = 0; i < n; i++)
{
scanf("%d",&n);
}
if(Readings <= 80)
{
printf("Pass: %d\n",n);
}
else
{
printf("Total number of failures: %d\n",Readings);
}
return 0;
}


