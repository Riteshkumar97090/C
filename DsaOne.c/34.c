#include<stdio.h>
int main(){
    int n;
    printf("enter row size :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i=i+2){
        int t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}