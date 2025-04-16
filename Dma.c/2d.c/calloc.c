#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int **ptr=(int **) calloc (n,sizeof(int));

    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&ptr[i*n+j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",ptr[i*n+j]);
            //printf("%d",ptr[i][j]);
        }
        printf("\n");
    }
    //printf("sum :%d ",sum);
    return 0;
}