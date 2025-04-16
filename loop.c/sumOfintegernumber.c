#include<stdio.h>
int main(){
    int i;
    printf("enter first digit of sum :");
    scanf("%d",&i);
    int n;
    printf("enter last digit of sum :");
    scanf("%d",&n);
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
       //printf("%d ",sum);
    }
    printf("%d ",sum);
    return 0;
}