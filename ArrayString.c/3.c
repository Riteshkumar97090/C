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
    int k=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(k==arr[i][j]){
                printf("kth :%d",arr[i][j]);
            }
            else{
                printf("not match");
            }
        }
    }
    return 0;
}