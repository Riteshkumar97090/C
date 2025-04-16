#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int nos=n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<nos;j++){
            printf(" ");
        }
        nos--;
        int a=i;
        for(int k=1;k<=i;k++){
            printf("%d",a);
            a--;
        }
        for(int l=2;l<=i;l++){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}