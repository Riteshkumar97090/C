#include<stdio.h>
int main(){
    int i;
    printf("enter first number :");
    scanf("%d",&i);
    int n;
    printf("enter last number :");
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0)
        printf("%d ",i);
        i++;
    }
    return 0;
}