#include<stdio.h>
int main()
{
int year;

printf("Enter a year");
scanf("%d" , &year);

if((year % 400 == 0) || (year % 4 == 0) && (year % 100 !=0))
{
printf("leap year: %d\n", year);
}
else
{
printf("Not a leap year: %d\n", year);
}
return 0;
}

