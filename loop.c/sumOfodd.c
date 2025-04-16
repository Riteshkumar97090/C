#include<stdio.h>
int main(){
    int i;
    printf("enter first number :");
    scanf("%d",&i);
    int n;
    printf("enter last number :");
    scanf("%d",&n);
    int sum=0;
    while(i<=n){
        if(i%2!=0)
        sum=sum+i;
        i++;
    }
    printf("%d ",sum);
    return 0;
}