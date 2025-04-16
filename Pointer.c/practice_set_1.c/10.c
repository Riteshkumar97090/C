#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int *ptr=arr[0];

    printf("output :\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(ptr+i*n)+j);
        }
        printf("\n");
    }
    return 0;
}