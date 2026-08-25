#include <stdio.h>

int main() {
    int arr[] = {0, 5, 0, 3, 8, 0, 2};
    int n = 7;
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    while (index < n) {
        arr[index] = 0;
        index++;
    }

    printf("Array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
