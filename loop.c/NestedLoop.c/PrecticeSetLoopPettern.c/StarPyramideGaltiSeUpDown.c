#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int nst=1;
    int a=-1;
    for(int i=1;i<=n*2-1;i++){
        for(int j=1;j<=n+a;j++){     
            printf(" ");
        }
            for(int k=1;k<=nst;k++){
            printf("* ");
        }
        if(i<n){
            a--;
            nst++;
        }
        else{
            a++;
            nst--;
        }
        printf("\n");
    }
    return 0;
}