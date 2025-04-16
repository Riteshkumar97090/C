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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<r;k++){
                for(int l=0;l<c;l++){
                    if(arr[i][j]<arr[k][l]){
                        int temp=arr[i][j];
                        arr[i][j]=arr[k][l];
                        arr[k][l]=temp;
                    }
                }
            }
        }
    }
    printf("accending :\n");
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}