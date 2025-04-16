#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int nos=1;
     for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=nos;j++){
            printf("*");
        }
        nos=nos+2;
        printf("\n");
     }
    return 0;
}