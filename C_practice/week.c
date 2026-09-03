#include<stdio.h>
int main(){
char operator;
  int n;
printf("Enter the values (1-7):");
  scanf("%d",&n);

  switch (n){
    case 1:
  printf("Monday");
  break;
  case 2:
  printf("Tuesday");
  break;
  case 3:
  printf("wednesday");
  break;
  case 4:
  printf("Thursday");
  break;
  case 5:
  printf("friday");
  break;
  case 6:
  printf("saturday");
  break;
  case 7:
  printf("sunday");
  break;
}
return 0;
}
