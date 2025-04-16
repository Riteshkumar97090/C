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
    int mdlrow=0;
    int mdlcul=0;
    for(int i=1;i<=1;i++){
        for(int j=0;j<n;j++){
            mdlrow+=arr[i][j];
        }
    }
    printf("mdlrow=%d\n",mdlrow);

    for(int i=0;i<n;i++){
        for(int j=1;j<=1;j++){
            mdlcul+=arr[i][j];
        }
    }
    printf("mdlcul=%d\n",mdlcul);
    int sum=mdlcul+mdlrow;
    printf("sum=%d\n",sum);
    return 0;
}