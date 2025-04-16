#include<stdio.h>
int main(){
    int r;
    printf("enter row size :");
    scanf("%d",&r);
    int c;
    printf("enter column size :");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter row and column element :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int row1=0;
    printf("output is :\n");
    for(int i=0;i<=0;i++){
        for(int j=0;j<c;j++){
            row1=row1+arr[i][j];
        }
    }
        printf("row1=%d\n",row1);
    int row2=0;
    for(int i=1;i<=1;i++){
        for(int j=0;j<c;j++){
            row2=row2+arr[i][j];
        }
    }
        printf("row2=%d\n",row2);
    int col1=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<=0;j++){
            col1=col1+arr[i][j];
        }
    }
        printf("col1=%d\n",col1);
    int col2=0;
    for(int i=0;i<r;i++){
        for(int j=1;j<=1;j++){
            col2=col2+arr[i][j];
        }
    }
        printf("col2=%d\n",col2);
    return 0;
}