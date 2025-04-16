#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int nst=n*2-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            if(i==1||i==n||k==1||k==nst)  printf("*");
            else           printf(" ");
        }
        nst-=2;
        printf("\n");
    }
    return 0;
}