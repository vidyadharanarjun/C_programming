#include<stdio.h>
int main()
{
int n, num, digit, sum;

printf("Armstrong numbers from 1 to 1000 are : ");

for(num = 1; num <= 1000; num++)
{
n = num;
sum =  0;

while(n > 0)
{
digit = n % 10;
sum = sum + digit * digit * digit;
n = n / 10;
}

if(sum == num )
{
printf("%d" , num);
}
}
return 0;
} 
