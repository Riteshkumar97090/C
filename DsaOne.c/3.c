#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    printf("output :\n");
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    return 0;
}