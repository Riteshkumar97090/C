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
    printf("output :\n");
    printf("even =");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    
    return 0;
}