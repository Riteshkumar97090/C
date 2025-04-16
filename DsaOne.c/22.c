#include<stdio.h>
int main(){
    int n;
    printf("Array size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int repeat=3;
    printf("\nArray elements :\n");
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i;j<n;j++){
            if(arr[i]==arr[j]){
            count++;
            repeat=arr[i];
            }
        }
        if(count>1){
            printf("%d is rapted,count=%d",repeat,count);
            break;
        }
    }
    return 0;
}