#include <stdio.h>

void calculate(int arr[], int n, int *sum, float *average)
{
    *sum = 0;

    for (int i = 0; i < n; i++)
        *sum += arr[i];

    *average = (float)*sum / n;
}

int main()
{
    int arr[100], n, sum;
    float average;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    calculate(arr, n, &sum, &average);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
