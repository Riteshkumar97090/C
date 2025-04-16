#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int a=97,b=32;
    for(int i=1;i<=n;i++){
        if(a%2!=0){
        for(int j=1;j<=i;j++){
            printf("%c",a);
            a++;
        }
        }
        else{
            for(int k=1;k<=i;k++){
            printf("%c",a-b);
        }
        }
        printf("\n");
    }
    return 0;
}