#include <stdio.h>

int main() {
    int n, digit, sum = 0, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        sum = sum + digit;
        count++;
        n = n / 10;
    }

    printf("Digit Sum : %d\n", sum);
    printf("Digit Count : %d\n", count);

    return 0;
}
