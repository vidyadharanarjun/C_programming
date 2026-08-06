#include<stdio.h>
int reverse(int num){
int reverse = 0;

while (num!= 0){
int digit = num % 10;
reverse = reverse * 10 + digit;
num = num / 10;
}
return reverse;
}

int main(){
int number;

printf("Enter the number: ");
scanf("%d",&number);

printf("Reversed number = %d\n", reverse(number));

return 0;
}


