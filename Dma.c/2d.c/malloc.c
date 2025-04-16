#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int **ptr=(int **) malloc (sizeof(int*)*n);

    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        ptr[i]=(int*)malloc(sizeof(int)*n);
        for(int j=0;j<n;j++){
            scanf("%d",&ptr[i][j]);
        }
    }
    int sum=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //printf("%d ",ptr[i][j]);
            sum=sum+ptr[i][j];
        }
        printf("\n");
    }
    printf("%d",sum);
    return 0;
}