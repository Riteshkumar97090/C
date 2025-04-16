#include<stdio.h>
int main(){
    int m,n;
    printf("enter no of rows    :");   //no of line
    scanf("%d",&m);
    printf("enter number of columns :");   //no of star in each lines
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
        printf("*");
        }
        printf("\n");
    }  
    return 0;
}