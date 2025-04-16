//(1!+4!+5!=145)    1!==1  ,  4!==4*3*2*1 , 5!==5*4*3*2*1
#include<stdio.h>
int main(){
    int sum,a,b,temp,rem,n,fact;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter first number :");
    scanf("%d",&b);
    for(n=a;n<=b;n++){
        temp=n;
        sum=0;
        while(temp!=0){
            fact=1;
            rem=temp%10;
            for(int i=1;i<=rem;i++){
                fact=fact*i;
            }
            sum=sum+fact;
            temp=temp/10;
        }
        if(sum==n)  printf("strong number%d\n",sum);
    }
    return 0;
}