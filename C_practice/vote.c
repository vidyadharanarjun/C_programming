#include<stdio.h>
int main()
{
	int age;
	printf("Enter person age:");
	scanf("%d", &age);
	age >=18 ? printf("Person is eligible to vote")
	: printf("person is not eligible to vote");
	return 0;
}
