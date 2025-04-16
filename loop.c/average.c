#include<stdio.h>
int main(){
    int sum=0,c=0,rem;
    int n;
    printf("enter average number :");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        c++;
    }
    printf("%d ",sum/c);
    return 0;
}