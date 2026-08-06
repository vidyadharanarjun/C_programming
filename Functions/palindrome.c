#include <stdio.h>

int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}

int isPalindrome(int n)
{
    return (n == reverse(n));
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
