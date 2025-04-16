#include<stdio.h>
int main(){
    int n;
    printf("enter size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter a number :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0||arr[i]==1){
        }
        else{
            printf("%d is invalide\n",arr[i]);
            i--;
        }
    }
        printf("arr=");
        for(int i=0;i<n;i++){
            printf("%d,",arr[i]);
        }
    return 0;
  }