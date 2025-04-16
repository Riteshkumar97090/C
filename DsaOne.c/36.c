#include<stdio.h>
int main(){
    int n;
    printf("enter row size :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=-999;
    int min=999;
    for(int i=0;i<n;i++){
       if(max<arr[i]){
        max=arr[i];
       }
       if(min>arr[i]){
        min=arr[i];
       }
    }
    printf("max=%d\n",max);
    printf("min=%d\n",min);
    
    int diff=max-min;
    printf("different :%d",diff);

    return 0;
}