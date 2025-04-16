#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int l=1;l<=2*n+1;l++){      //pahli line alag se
        printf("*");                // uper ke liye
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){     //star
            printf("*");
        }
        for(int k=1;k<=nsp;k++){     //space
            printf(" ");
        }
        for(int j=1;j<=nst;j++){      //star
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}