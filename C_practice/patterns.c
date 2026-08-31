#include<stdio.h>
int main(){
int n, i, j;
scanf("%d",&n);

for(i = 1; i <= n; i += 2){
for(j = 1; j <= n; j += 2){
printf("*");
}
}
for(j = 1; j <= n; j++){
printf("*\n");}
for(i = n - 2; i >= 1; i +=2){
for(j = i;  j < n; j +=2){
printf("*\n");
}
}
return  0;
}
