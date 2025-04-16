#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int nos=n-1;
     for(int i=1;i<=n;i++){
        for(int l=1;l<=nos;l++){   //number of space
            printf(" ");
        }
        nos--;
        for(int j=1;j<=i;j++){     //number triangle
            printf("%d",j);   
        }
        int a=i-1;                 //extra variable
        for(int k=1;k<=i-1;k++){   //-- ke liye 
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}