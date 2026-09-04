#include<stdio.h>
int main()
{
	int num , reverse, digit, original;
	printf("Enter the palindrome number:");
	scanf("%d", & num);
	original = num;
	while(num !=0){
		digit = num % 10;
		reverse = reverse * 10 + digit;
		num = num / 10;
	}
	if(original == reverse){
		printf("Number is palindrome %d", original);
	}
		else{
			printf("Number is not palindrome %d",original);
		}
		return 0;
	}


