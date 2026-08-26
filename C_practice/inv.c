#include<stdio.h>
int main() {
int N, i, invalidcount = 0;
int temp[100];

printf("Enter number of elements: ");
scanf("%d",&N);

for (i = 0; i < N; i++){

scanf("%d", &temp[i]);


if(temp[i] < 0 || temp[i] > 100) {
temp[i] = -1;
invalidcount++;
} 
}

printf("Modified array : ");
for (i = 0; i < N; i++)
{
printf("%d", temp[i]);
}
printf("Invalidcount  = %d\n " , invalidcount);
return  0;
}


