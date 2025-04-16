#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int *ptr=(int *) malloc (sizeof(int)*n);
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);;
    }
    free(ptr);
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}