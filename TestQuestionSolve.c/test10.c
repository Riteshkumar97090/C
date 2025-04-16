#include<stdio.h>
int main(){
    int n=3;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int mdlcol=0;
    int mdlrow=0;

     for(int i=1;i<=1;i++){
        for(int j=0;j<n;j++){
            mdlcol+=arr[i][j];
        }
    }

     for(int i=0;i<n;i++){
        for(int j=1;j<=1;j++){
            mdlrow+=arr[i][j];
        }
    }
    int sum=mdlrow+mdlcol;

    printf("%d",sum);
    return 0;
}