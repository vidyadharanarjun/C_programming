#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integer:");
  scanf("%d %d", &a , &b);
  printf("sum = %d\n" , a+b);
  printf("difference = %d\n" , a-b);
  printf("product = %d\n" , a*b);

  if(b != 0){
    printf("Quotient = %d\n" , a / b);
    printf("Reminder = %d\n" , a % b);
  }
    else{
    printf("Quotient undefined",a/b);
    printf("Reminder undefined",a%b);
  }

    return 0;
}
