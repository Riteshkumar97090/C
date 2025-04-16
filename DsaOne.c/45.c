#include <stdio.h>
int main(){
    int n, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter  elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        while (a[i] != -1 && a[i] != i) {
            if (a[i] >= 0 && a[i] < n && a[i] != a[a[i]]) {
                temp = a[a[i]];
                a[a[i]] = a[i];
                a[i] = temp;
            } else {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != i) {
            a[i] = -1;
        }
    }
    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}