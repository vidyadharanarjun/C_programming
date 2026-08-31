#include <stdio.h>
int main() 
int n;
scanf("%d", &n);
int arr[100000];
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
int insertPos = 0;
for (int i = 0; i < n; i++) {
if (arr[i] != 0) {
arr[insertPos] = arr[i];
insertPos++;
}
}
for (int i = insertPos; i < n; i++) {
arr[i] = 0;
}
for (int i = 0; i < n; i++) {
printf("%d", arr[i]);
if (i != n - 1) printf(" ");
}
printf("\n");

return 0;
}


