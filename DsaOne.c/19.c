#include<stdio.h>
int main(){
    int n;
    printf("enter size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    printf("enter delete element :");
    scanf("%d",&a);
    int temp;
    for(int i=0;i<n;i++){
        if(a==arr[i]){
        temp=i;
        }
    }
    for(int i=temp;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}