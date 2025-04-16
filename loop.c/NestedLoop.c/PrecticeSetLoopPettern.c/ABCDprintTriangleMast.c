#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);       
    for(int i=1;i<=n;i++){
        int a=i+64;
        for(int j=1;j<=i;j++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}