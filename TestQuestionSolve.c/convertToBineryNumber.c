#include<stdio.h>
int main(){
    int n;
    printf("Enter desimal num :");
    scanf("%d",&n);
    int s=0;
    int f=1;
    int r=0;
    while(n!=0){
        r=n%2;
        s=s+(r*f);
        f=f*10;
        n=n/2;
    }
    printf("binari no is :%d",s);
    return 0;
}