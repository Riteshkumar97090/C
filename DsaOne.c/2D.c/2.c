#include<stdio.h>
int main(){
    int r;
    printf("enter row size :");
    scanf("%d",&r);
    int c;
    printf("enter column size :");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter array element :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("sum=%d",sum);
    return 0;
}