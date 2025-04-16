#include<stdio.h>
int main(){
    int i;
    printf("enter first digit :");
    scanf("%d",&i);
    int n;
    printf("enter last digit :");
    scanf("%d",&n);
    while(i<=n){
        if(i%3==0){
            i++;
            continue;
        }
        printf("%d ",i);
        i++;
    }
    return 0;
}