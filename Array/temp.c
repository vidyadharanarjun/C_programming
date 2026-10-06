#include<stdio.h>

int main(){ 

int n, i, invalidcount = 0;

printf("Enter the  number of readings");
scanf("%d", &n);

int temp[n];

for(i = 0; i < n; i++)
{
scanf("%d",&temp[i]);
}

for(i = 0; i < n; i++)
{
if(temp[i]<0 || temp[i]>100)
{
temp[i]= -1;
invalidcount++;
}
}
printf("Modified array:\n");
for(i = 0; i < n; i++){
printf("%d", temp[i]);
}
printf("Invalid count: %d\n", invalidcount);

return 0;
}


