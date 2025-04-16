#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    int max=-999;
    printf("Enter Array Element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("output :\n");
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("max=%d",max);
    return 0;
}