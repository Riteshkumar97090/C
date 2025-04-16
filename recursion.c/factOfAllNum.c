#include<stdio.h>
int factofallnum(int n){
    if(n==1){
        return 1;
    }
    return n*factofallnum(n-1);
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int ans=factofallnum(n);
    printf("ans=%d",ans);
    
    return 0;
}