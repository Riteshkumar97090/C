#include<stdio.h>
int main(){
    int a;
    printf("enter first array size :");
    scanf("%d",&a);
    int arr[a];
    printf("enter array first element:\n");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int b;
    printf("enter second array size :");
    scanf("%d",&b);
    int brr[b];
    printf("enter array second element :\n");
    for(int i=0;i<b;i++){
        scanf("%d",&brr[i]);
    }
    int c;
    printf("enter third array size :");
    scanf("%d",&c);
    int crr[c];
    printf("enter array second element :\n");
    for(int i=0;i<c;i++){
        scanf("%d",&crr[i]);
    }
    
    int d=a+b+c;
    int drr[d];
    for(int i=0;i<a;i++){
        drr[i]=arr[i];
    }
    for(int i=0;i<b;i++){
        drr[i+a]=brr[i];
    }
     for(int i=0;i<c;i++){
        drr[i+a+b]=crr[i];
    }
    for(int i=0;i<d;i++){
        for(int j=i+1;j<d;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
            }
        }
    }
    return 0;
}