#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int a=1,b=65;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=n;j++){
                if(j%2!=0){
                printf("%d",a);
                a++;
                }
                else{
                    printf(" ");
                    a++;
                }
            }
            printf("\n");
        }
        else{
            for(int k=1;k<=n;k++){
                if(k%2==0){
                printf("%c",b);
                b++;
                }
                else{
                    printf(" ");
                    b++;
                }
        }
        printf("\n");
    }
    }
    return 0;
}