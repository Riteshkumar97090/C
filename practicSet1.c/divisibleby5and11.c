#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    if(n/5==0||n/11==0){
        printf("divisible by 5 or 11 ");
    }
    else{
        printf("not divisible by 5 or 11 ");
    }
    return 0;
}