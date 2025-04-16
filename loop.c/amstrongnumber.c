//(1^3+5^3+3^3=153)     1*1*1 + 5*5*5 + 3*3*3
//jitna digit hai utna se sab mai multiply


#include<stdio.h>
int main(){
    int n,rem,s=0;
    printf("enter number :");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        rem=n%10;
        s=(rem*rem*rem)+s;
        n=n/10;
    }
    if(s==temp)  printf("%d is armstrong no :",temp);
    else         printf("%d is not armstrong :",temp);
    
    return 0;
}