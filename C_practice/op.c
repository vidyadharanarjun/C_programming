#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the integer:");
    scanf("%d %d" , &a , &b );

    printf("sum = %d\n" , a + b);
    printf("Difference = %d\n" , a - b);
    printf("product = %d\n" , a * b);

    if( b != 0)
    {
    printf("Quotient =  %d\n" , a / b);
    printf("Reminder = %d\n", a % b);
    }
    else{
        printf("Quotient and Reminder are undefined");
    }
    return 0;
}
