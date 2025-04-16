#include<stdio.h>
void num(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    num(n-1);

    return;
}
int main(){
    num(10);
    return 0;
}