#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter  elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Next greater elements:\n");
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                printf("%d = %d\n", a[i], a[j]);
                found = 1; 
                break;
            }
        }
        if (!found) {
            printf("%d = -1\n", a[i]);
        }
    }
    return 0;
}
