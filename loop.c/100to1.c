#include<stdio.h>
int main(){
    int n;
    printf("enter reverse first digit :");
    scanf("%d",&n);
    int i;
    printf("enter last digit :");
    scanf("%d",&i);
    while(n>=i){
        printf("%d ",n);
        n--;
    }
    
    return 0;
}

