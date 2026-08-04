#include<stdio.h>
int swap (int*x, int*y)
{
	int temp = *x;
	*x =*y;
	*y = temp;
}
int main()
{
	int a = 15;
	int b= 45;

	printf("%d %d\n",a,b);
	swap(&a,&b);
		printf("%d%d\n",a,b);
	return 0;
}
	
