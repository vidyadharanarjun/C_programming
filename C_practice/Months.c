#include<stdio.h>
int main(){
  int n;
  printf("Enter the values(1-12): ");
  scanf("%d" ,& n);
  switch (n){
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
  printf("%d month has 31 days");
  break;
  case 4:
  case 6:
  case 9:
  case 11:
  printf("%d month has 30 days");
  break;
  case 2:
  printf("%d month has 28 days");
  break;
}
return 0;
}

  
  
