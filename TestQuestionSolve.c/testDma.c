#include<stdio.h>
#include<stdlib.h>
int main(){
    int r;
    printf("enter array size :");
    scanf("%d",&r);

    int **ptr=(int**)calloc(r,sizeof(int*));
    for(int i=0;i<r;i++){
        ptr[i]=(int*)calloc(r,sizeof(int*));
        for(int j=0;j<r+1;j++){
            scanf("%d",&ptr[i][j]);
        }
    }

    int rsum=0;
    int csum=0;
    for(int i=0;i<1;i++){
        for(int j=0;j<r+1;j++){
            rsum=rsum+ptr[i][j];
        }
    }

    for(int i=1;i<=1;i++){
        for(int j=0;j<r+1;j++){
            csum=csum+ptr[i][j];
        }
    }

    printf("first row sum :%d\n",rsum);
    printf("second row sum :%d\n",csum);
    return 0;
}