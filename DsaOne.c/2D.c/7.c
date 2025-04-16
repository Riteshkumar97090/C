#include<stdio.h>
int main(){
    int r;
    printf("enter row size :");
    scanf("%d",&r);
    int c;
    printf("enter column size :");
    scanf("%d",&c);
    int arr[r][c];
    int count=0;
    printf("enter row and column element :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int a;
    printf("enter present check number :");
    scanf("%d",&a);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a==arr[i][j]){
                count=1;
            }
        }  
    }
    if(count==1) printf("present");
    else     printf("not present");
    return 0;
}