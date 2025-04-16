#include<stdio.h>
int main(){ 
    int j=122;
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%c ",j); 
        j--;
    }
    return 0;
}