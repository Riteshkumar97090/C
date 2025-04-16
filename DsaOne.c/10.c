#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    int min=999;
    printf("Enter Array Element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("output :\n");
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("min=%d",min);
    return 0;
}