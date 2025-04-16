#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int mdl=n/2+1;
    int nst=n/2+1;
    int nsp=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){      
           printf("*");
        }
        if(i<mdl){
           nst--;
            nsp++;
        }
        else{
           nst++;
           nsp--;
        }
        printf("\n");
    }
    return 0;
}