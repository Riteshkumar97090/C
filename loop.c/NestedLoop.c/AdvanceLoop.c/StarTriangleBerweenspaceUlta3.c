#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(i==1||i==n||j==1||j==n||j==i) printf("*");
            else     printf(" ");
        }
        printf("\n");
    }
    return 0;
}