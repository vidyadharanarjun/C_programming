#include<stdio.h>
int main()
{
int num, n, sum = 0, digit;

printf("Enter a number: ");
scanf("%d", &n);
n = num;

while(n > 0)
{
digit = n % 10;
sum = sum + digit * digit * digit;
n = n / 10;
}
if ( sum == num)
{
printf("The number is Armstrong %d", num);
}
else
{
printf("The number is not Armstrong %d",num);
}

return 0;
}

