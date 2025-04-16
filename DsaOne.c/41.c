#include <stdio.h>
int main() {
    int n, l = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter  elements (only 0s and 1s):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int r = n-1;
    while (l < r) {
        if (a[l] == 1) {
            l++;
        }
        else if (a[r] == 0) {
            r--;
        }
        else {
            a[l] = 0;
            a[r] = 1;
            l++;
            r--;
        }
    }
    printf("Segregated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}