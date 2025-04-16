#include<stdio.h>
int main(){
    int count=0;
    int r;
    printf("enter first matrix row size :");
    scanf("%d",&r);
    int c;
    printf("enter first matrix column size :");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter first matrix row and column element :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int p;
    printf("enter second matrix row size :");
    scanf("%d",&p);
    int q;
    printf("enter second matrix column size :");
    scanf("%d",&q);
    int brr[p][q];
    printf("enter second matrix row and column element :\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<p;k++){
                for(int l=0;l<q;l++){
                if(arr[i][j]==brr[k][l]){
                count=1;
                break;
                }
            }
        }
    }
    }
    if(count==1)  printf("equal");
    else          printf("not equal");
    return 0;
}