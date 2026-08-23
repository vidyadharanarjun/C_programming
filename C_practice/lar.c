#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = second = -2147483648;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("No second largest element.\n");
    else
        printf("Second largest = %d\n", second);

    return 0;
}
