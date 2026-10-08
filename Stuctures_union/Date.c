#include<stdio.h>
struct date{
	int date;
	int month;
	int year;
};
int main() {
	struct date d;
	printf("Enter the date:");
	scanf("%d",&d.date);
	printf("Enter the month:");
	scanf("%d",&d.month);
	printf("Enter the year:");
	scanf("%d",&d.year);
printf("%02d/%02d/%04d" ,d.date,d.month,d.year);
return 0;}
