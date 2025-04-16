#include <stdio.h>
int main() {
    int n, total = 1;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter  elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        total = total * 2;
    }
    printf("Subsets:\n");
    for (int i = 0; i < total; i++) {
        printf("{ ");
        for (int j = 0; j<n ; j++) {
            if (i & (1 << j)) {
                printf("%d ", a[j]);
            }
        }
        printf("}\n");
    }
    return 0;
}
