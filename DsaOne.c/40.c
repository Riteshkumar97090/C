#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("output :\n");
    for(int i=0;i<n;i++){
        bool a=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                a=true;
            }            
        }
        if(a==false){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}