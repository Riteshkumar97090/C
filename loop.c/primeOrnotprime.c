#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int i=2;
    int c=0;
    while(i<n){
        if(n%i==0){
        c=1;
        break;
        }
        i++;   
    }
    if(c==0) printf("prime");
    else  printf("not prime");
    return 0;
}