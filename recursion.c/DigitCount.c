#include<stdio.h>
int digitcount(int n,int c){
    if(n==0){
        printf("%d",c);
        return;
    }
    digitcount(n/10,c++);
    return;
}
int main(){
    int c=0;
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int digitcount(n,c);
    printf("%d",c);
    
    return 0;
}