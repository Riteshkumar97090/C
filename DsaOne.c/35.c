#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    int brr[n];
    for(int i=0;i<n;i++){
        if(0<arr[i]){
            brr[a]=arr[i];
            a++;
        }
    }
    for(int i=0;i<n;i++){
        if(0>arr[i]){
            brr[a]=arr[i];
            a++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}