#include <stdio.h>

int main() {
    int n;
    int l = 0, m = 0, h;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter  elements (only 0s, 1s, and 2s):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    h = n - 1;

    while (m <= h) {
        if (a[m] == 0) {
            int t = a[l];
            a[l] = a[m];
            a[m] = t;
            l++;
            m++;
        } else if (a[m] == 1) {
            m++;
        } else {
            int t = a[m];
            a[m] = a[h];
            a[h] = t;
            h--;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
