#include <stdio.h>

int main() {
    int arr[] = {2, 5, 3, 2, 5, 7, 3, 8};
    int n = 8;

    printf("Duplicate elements: ");

    for (int i = 0; i < n; i++) {
        int alreadyPrinted = 0;

        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}
