#include<stdio.h>
int main()
{
int  num, largest=0, digit=0 ;
printf("Enter the value:");
scanf("%d", &num);
while(num != 0)
{
digit = num % 10;
num=num/10;
if(digit > largest){
	largest = digit;}}
printf("%d\n Largest Number" , largest);
return 0;
}
