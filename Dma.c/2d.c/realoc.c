#include<stdio.h>
#include<stdlib.h>
int main(){
    int r;
    printf("enter array size :");
    scanf("%d",&r);
    int c;
    printf("enter column size :");
    scanf("%d",&c);

    int **ptr=(int **) calloc (sizeof(int*),r);
    for(int i=0;i<r;i++){
        ptr[i]=(int*) calloc(sizeof(int),c);
    }

    printf("enter array element :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&ptr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",ptr[i][j]);
        }
        printf("\n");
    }
    
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         printf("%d ",ptr[i][j]);
    //     }
    //     printf("\n");
    // }

    // int k;
    // printf("enter new array size :");
    // scanf("%d",&k);

    // int* arr=(int*)realloc(ptr,sizeof(int)*k*n);

    // printf("enter new array element :\n");
    // for(int i=n;i<k;i++){
    //     for(int j=n;j<k;j++){
    //         scanf("%d",&arr[i*n+j]);
    //     }
    // }
    // for(int i=n;i<k;i++){
    //     for(int j=n;j<k;j++){
    //         printf("%d ",arr[i*n+j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}