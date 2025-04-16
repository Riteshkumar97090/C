//(1!+4!+5!=145)    1!==1  ,  4!==4*3*2*1 , 5!==5*4*3*2*1
#include<stdio.h>
int main(){
    int n,temp,rem,count,fact,sum=0;
    printf("enter a number :");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        count=1;
        fact=1;
        while(count<=rem){
            fact=fact*count;
            count++;
        }
        printf("factorial of %d is %d\n",rem,fact);
        sum=sum+fact;
        n=n/10;
    }
    if(temp==sum) printf("%d is strong no",temp);
    else          printf("%d is not strong no",temp);
    return 0;
}