#include <stdio.h>
int main() {
int n, i, count = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
        if (n % i == 0) 
{
            printf("%d ", i);
            count++;
}
}
printf("Total divisor count: %d\n", count);

    if (count == 2)
        printf("Result = PRIME");
    else
        printf("Result = COMPOSITE");

    return 0;
}
