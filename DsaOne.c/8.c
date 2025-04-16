#include<stdio.h>
int main(){
    int a;
    printf("enter element first size :");
    scanf("%d",&a);
    int arr[a];
    printf("enter array first element:\n");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int b;
    printf("enter element second size :");
    scanf("%d",&b);
    int brr[b];
    printf("enter array second element :\n");
    for(int i=0;i<b;i++){
        scanf("%d",&brr[i]);
    }
    printf("third element :");
    int c=a+b;
    int crr[c];
    for(int i=0;i<a;i++){
        crr[i]=arr[i];
    }
    for(int i=0;i<b;i++){
        crr[i+a]=brr[i];
    }
    for(int i=0;i<c;i++){
        printf("%d,",crr[i]);
    }
    return 0;
}