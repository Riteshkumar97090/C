#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int *ptr=(int *) malloc (n*sizeof(int));
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}