#include<stdio.h>
int sumofallnum(int n){
    if(n==0){
        return 0;
    }
    return n+sumofallnum(n-1);
}
int main(){
    int n=5;
    int ans=sumofallnum(n);
    printf("ans=%d",ans);
    
    return 0;
}
