#include<stdio.h>
int main(){
    int i,n;
    printf("enter first number :");
    scanf("%d",&i);
    printf("enter last digit :");
    scanf("%d",&n);
    for(i;i<=n;i++){
    int temp=i,rem=0,sum=0,count =0;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    temp=i;
    while(temp!=0){
        int c=1;
        rem=temp%10;
        for(int n=1;n<=count;n++){
            c=c*rem;
        }
        sum=sum+c;
        temp=temp/10;
    }
    if(i==sum)  printf("%d is armstrong no\n",i);
    }
    return 0;
}