#include<stdio.h>
int main(){
    int m;
    printf("enter row :");
    scanf("%d",&m);
    int n;
    printf("enter column :");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
        
        if(j%2!=0) printf("*");
        else printf("#");
        } 
        printf("\n");
    }
    return 0;
}