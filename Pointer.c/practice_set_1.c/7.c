#include<stdio.h>
int main(){
    int *ptr;
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    printf("output :\n");
    for(int i=n-1;0<=i;i--){
        printf("%d ",*(ptr+i));
    }
    return 0;
}