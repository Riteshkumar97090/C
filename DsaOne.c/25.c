#include<stdio.h>
int main(){
    int n;
    printf("enter size :");
    scanf("%d",&n);
    int arr[n];
    int c=0;
    printf("Enter element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    printf("Enter present check number :");
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(a==arr[i]){
            c=1;
        }
    }
        if(c==1)   printf("%d is present in this array",a);
        else       printf("%d is not present in this array",a);
    return 0;
}