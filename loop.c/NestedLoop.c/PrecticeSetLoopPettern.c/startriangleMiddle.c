#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int nst=1;
     for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst+=2;
        printf("\n");
     }
    return 0;
}