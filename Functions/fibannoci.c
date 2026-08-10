#include<stdio.h>
void fibanacci(int n)

{ 
int a=0, b=1,next , i;


for(i=0;  i<=n; i++)
{
printf("%d",a);
next = a + b;
a = b;
a = next;
}
}
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);

printf("fibanacci series : ");
fibanacci(n);

return 0;

}
