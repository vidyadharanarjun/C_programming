#include<stdio.h>
int main()
{
float n;

printf("Enter an voltage");
scanf("%2f",&n);

if(n < 3.0)
{
printf("Under voltage: %.2f\n",n);
}
else if (3.0 > 3.6){

printf("Voltage is normal: %.2f\n",n);
}
else{
printf("Over voltage: %.2f\n",n);
}
return 0;
}

