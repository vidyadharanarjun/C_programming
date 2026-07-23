#include<stdio.h>
int main()
{
int num;
printf("Enter a integer: ");
scanf("%d", &num);
if(num % 2 == 0)
{
printf("Number is even: %d\n", num);
}
else
{
printf("Number is odd: %d\n",num);
}
return 0;
}
