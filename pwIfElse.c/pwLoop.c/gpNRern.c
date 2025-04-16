#include<stdio.h>
int main(){
    int n;  //etni baar loop chalega
    printf("Enter a number :");
    scanf("%d",&n);
    int a=3;
    for(int i=1; i<=n; i++){      //3'12,48
        printf("%d ",a);
        a = a * 4;
    }
    return 0;
}