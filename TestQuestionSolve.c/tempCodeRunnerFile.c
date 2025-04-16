#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int rem=0;
    int temp=n;
    
    while(n!=0){
        rem=n%10;

    for(int i=2;i<=rem;i++){
        if(rem%i==0){
            printf("%d is prime",rem);
            
        }
        n=n/10;
    }

    }
    return 0;
}