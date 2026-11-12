#include<stdio.h>
int main(){
	int a = 20;
	int *p;
	p = &a;
	printf("Enter the value of a = %d\n",a);
	printf("Enter the address of a = %p\n",p);
	return 0;
}
