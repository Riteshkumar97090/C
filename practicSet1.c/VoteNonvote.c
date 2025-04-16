#include<stdio.h>
int main(){
    int n;
    printf("Enter your age :");
    scanf("%d",&n);
    if(18<n){
        printf("vote");
    }
    else{
        printf("non vote");
    }
    return 0;
}