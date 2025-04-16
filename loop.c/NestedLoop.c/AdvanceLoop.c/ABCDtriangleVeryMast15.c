#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int a=65,b=97;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ 
            if(n%2==0){
            printf("%c",b);
            b+=2;
            }
            else{
                printf("%c",a);
                a+=2;
            }
        }
        printf("\n");
    }
    return 0;
}