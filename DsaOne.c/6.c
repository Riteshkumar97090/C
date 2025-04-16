#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int a=0;
    printf("output :\n");
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            a+=arr[i];
            count++;
        }
    }
    printf("avg=%d",a/count);

    return 0;
}