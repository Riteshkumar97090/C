#include<stdio.h>
int main(){
    int n;
    printf("enter array element :");
    scanf("%d",&n);
    int arr[n];

    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("second max :%d",arr[1]);
    return 0;
}