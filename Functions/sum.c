#include<stdio.h>
int add (int a, int b)
{
	return a+b;
}
int main()
{
	int x,y,sum;
	printf("Enter two number");
	scanf("%d%d", &x,&y);
	sum = (x + y);
	printf("%d\n", sum);
	return 0;
}


