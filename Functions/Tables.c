#include<stdio.h>
void tables (int num)
{
	int i;

	for(i=0; i<=10; i++)
	{
		printf("%d * %d=%d\n", num, i, num * i);
	}
}
int main()
{
int n;
printf("Enter a number");
scanf("%d", &n);
		tables(n);
	return 0;
}



