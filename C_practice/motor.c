#include<stdio.h>
int main()
{
int rpm;
float temp;
printf("Enter rpm: ");
scanf("%d", &rpm);

printf("Enter temp: ");
scanf("%f", &temp);

if(temp > 80)
printf("OVERHEAT - SHUTDOWN");
else if(rpm < 500)
printf("IDLE");
else if(rpm = 500>=3000)
printf("NORMAL");
else if(rpm > 3000 || temp > 60)
printf("OVERSPEED - CAUTION");
else
printf("OVERSPEED");

return 0;
}

