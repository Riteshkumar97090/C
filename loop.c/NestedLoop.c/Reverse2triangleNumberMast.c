#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int l=1;l<=2*n+1;l++){      //pahli line alag se
        printf("%d",l);                // uper ke liye
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){     //star
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){     //space
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){      //star
            printf("%d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}