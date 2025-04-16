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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          for(int k=i+1;k<n;k++){
            for(int l=i+1;l<n;l++){
                if(arr[i][j]==arr[k][l]){
                    printf("equel");
                }
                else{
                    printf("not ");
                }
            }
          }
        }
    }
    return 0;
}