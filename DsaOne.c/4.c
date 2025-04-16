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
    int f=1;
    printf("output :\n");
    for(int i=0;i<n;i++){
        f=f*arr[i];
    }
    printf("mult=%d",f);
    return 0;
}