#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(0<=n){
         if(0<n){
        printf("positive number");
        }
        else{
            printf("zero");
        }
    }
    else{
        printf("negative number");
    }
    return 0;
}