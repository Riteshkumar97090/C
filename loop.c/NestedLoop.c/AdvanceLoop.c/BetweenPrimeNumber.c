#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter first number :");
    scanf("%d",&i);
    printf("enter last number :");
    scanf("%d",&n);
    for(i;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("prime number is :%d\n",i);
    }
    return 0;
}