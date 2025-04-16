#include<stdio.h>
int main(){
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
   int crr[p][q];
   for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    printf("third matric is :\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}