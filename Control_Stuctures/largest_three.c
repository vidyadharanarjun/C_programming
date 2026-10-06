
#include<stdio.h>
int main()
{
int a = 54, b = 76, c = 97;

printf("Enter the number");
scanf("%d%d%d" , &a, &b, &c);

if(a >= b && b >=a)
{
printf("a is bigger: %d\n",a);
}
else if(b >= c && c >= b)
{
printf("b is bigger:%d\n",b);
}
else
{
printf("c is bigger: %d\n", c);
}
return 0;
}




