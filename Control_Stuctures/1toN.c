#include<stdio.h>
int main()
{
int N;

printf("Enter a integer");
scanf("%d" , &N);
printf("Numbers from 1 to %d are:\n", N);

for(int i = 0; i <=N; i++)
{
printf("%d\n", i);
}
return  0;
}
