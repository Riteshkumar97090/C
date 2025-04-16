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
    int k=15;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(k==arr[i]+arr[j]){
                printf("element :%d %d\n",i,j);
            }
        }
    }
    return 0;
}