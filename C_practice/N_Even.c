#include<stdio.h>
int main(){
  int n , i;
  printf("Enter the value of n: ");
  scanf("%d" , &n);
  for(i = 1; i < n; i++){
    if(i % 2 == 0){
      printf("Number is even %d\n", i);
    }
    else{
      printf("Number is odd %d\n",i);
    }
  }
return 0;
}
