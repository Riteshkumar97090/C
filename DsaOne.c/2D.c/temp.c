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
    int mdl=r/2;
    for(int i=0,j=r-1;i<j;i++,j--){
        int temp=arr[mdl][i];
        arr[mdl][i]=arr[mdl][j];
        arr[mdl][j]=temp;
    }
    for(int i=0,j=r-1;i<j;i++,j--){
        int temp=arr[i][mdl];
        arr[i][mdl]=arr[j][mdl];
        arr[j][mdl]=temp;
    }
    printf("output :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}