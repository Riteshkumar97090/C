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

     int max=-99;
     int min=999;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("max :%d\n",max);
    printf("min :%d\n",min);
    return 0;
}