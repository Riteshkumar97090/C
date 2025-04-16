#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int mdl=n/2+1;
    int nst=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){      
           printf("*");
        }
        if(i<mdl)  nst--;
        else   nst++;
        printf("\n");
    }
    return 0;
}