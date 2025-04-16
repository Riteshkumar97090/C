//0 1 1 2 3 5 8
#include<stdio.h>
int main(){
    int i;
    printf("enter first number :");
    scanf("%d",&i);
    int n;
    printf("enter last number :");
    scanf("%d",&n);
        int a=0;
        int b=1;
        int c=0;
        while(a<=n){
        if(a>=i&&i<=n){
        printf("%d ",a);
        }
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}