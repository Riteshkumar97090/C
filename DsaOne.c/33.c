#include<stdio.h>
int main(){
    int r;
    printf("enter row size :");
    scanf("%d",&r);
    int arr[r];
    printf("array element :\n");
    for(int i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<r;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}