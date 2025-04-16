#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);

    int *ptr=(int *) malloc (n*sizeof(int));
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);;
    }
    
    int k;
    printf("enter new size :");
    scanf("%d",&k);

    ptr=realloc(ptr,k);
    printf("enter new array :\n");
    for(int i=n;i<k;i++){
        scanf("%d",&ptr[i]);
    }
    printf("your array :");
    for(int i=0;i<k;i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}