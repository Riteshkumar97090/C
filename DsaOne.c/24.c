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
    printf("output :\n");
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            printf("%d is duplicate %d time\n",arr[i],count);
        }
    }
    return 0;
}