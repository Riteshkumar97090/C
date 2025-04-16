#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n][n];

    printf("enter array element ;\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    int k;
    printf("enter index check :");
    scanf("%d",&k);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(k==arr[i][j]){
                printf(" kth index :%d %d\n",i,j);
            }
            else{
                count++;
            }
        }
    }

    if(count==4){
        printf("-1");
    }

    return 0;
}