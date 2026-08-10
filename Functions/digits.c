#include<stdio.h>
int sumofdigits(int n)
{
int sum = 0;
while(n!=0)
{
sum = sum +(n % 10);
n / 10;
}
return 0;
}
int main()
{
int num;
printf("Enter a number");
scanf("%d\n",&num);

printf("Enter sum of digits : %d\n", sumofdigits(num));

return 0;
}
