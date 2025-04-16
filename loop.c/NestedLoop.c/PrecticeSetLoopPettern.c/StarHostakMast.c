#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++){
        if(i%2!=0){ 
        for(int j=1;j<=n;j++){
           if(j%2!=0)  printf("*");
            else        printf("#");
        }
        }
        else{
            for(int k=1;k<=n;k++){
                if(k%2!=0) printf("#");
                else printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}