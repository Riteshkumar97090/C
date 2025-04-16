#include<stdio.h>
int main(){
    int sum=0;
    int rem=0;
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of total number=%d",sum);
    return 0;
}