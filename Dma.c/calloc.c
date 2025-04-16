#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter array size :");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(int));
    printf("enter array element :\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }
    int sum=0;
    for (int i = 0; i < n; i++){
        //printf("%d ", ptr[i]);
        sum+=ptr[i];
    }
    printf("sum :%d",sum);
    return 0;
}