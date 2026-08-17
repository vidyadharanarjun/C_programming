#include<stdio.h>
int main()
{
int a;
float b;
double c;
double sum, average;

printf("Enter a integer : ");
scanf("%d\n" , &a);

printf("Enter a float: ");
scanf("%f\n", &b);

printf("Enter a double: ");
scanf("%lf\n" , &c);

sum = a + b + c ;
average = sum / 3;

printf("sum = %.2f\n", sum);
printf("average =%.2f\n" , average);

return 0;

}



