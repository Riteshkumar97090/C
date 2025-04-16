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
    int max=-9;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(max<count){
                max=count;
            }
        }
    }
    printf("max count :%d",max);
    printf("%d",count);
    return 0;
}