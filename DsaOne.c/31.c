#include<stdio.h>
int main(){
    int n;
    printf("enter element first size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array first element:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("output :\n");
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                printf(" %d ",arr[k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}