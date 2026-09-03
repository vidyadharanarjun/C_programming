#include<stdio.h>
int main()
{
  int a , b;
  char operator;
  printf("Enter two values:");
  scanf("%d %d" , &a , &b);
  printf("Enter operator(+,-, *, /,%):");
  scanf("  %c" ,&operator);

  switch (operator)
  {
    case '+':
    printf("Result = %d\n" , a + b);
    break;
    case '-':
    printf("Result = %d\n" , a - b);
    break;
    case '*':
    printf("Result =%d\n", a * b);
    break;
    case '/':
    printf("Result =%d\n", a / b);
    break;
    case '%':
    printf("Result =%d\n" ,a % b);
    break;
  }
  return 0;
}
    
