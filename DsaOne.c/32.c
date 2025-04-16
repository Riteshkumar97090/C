#include<stdio.h>
int main(){
    int r;
    printf("enter row size :");
    scanf("%d",&r);
    int arr[r];
    int j;
    printf("array element :\n");
    for(int i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<r;i++){
        for(j=i+1;j<r;j++){
            if(arr[i]<arr[j]){
                break;
            }
        }
        if(j==r){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}