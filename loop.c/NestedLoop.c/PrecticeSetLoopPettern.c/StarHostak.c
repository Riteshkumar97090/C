#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int m=n+2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j%2!=0) printf("*");
            else printf("#");
        }
        printf("\n");
    }
    return 0;
}