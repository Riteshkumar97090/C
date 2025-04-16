#include<stdio.h>
int main(){
    int a1,a2,a3;
    printf("enter the three angle of triangle :");
    scanf("%d%d%d",&a1,&a2,&a3);
    int sum;
    sum=a1+a2+a3;
    if(sum==180){                 //&& a1!=0 && a2!=0 && a3!=0){
        printf("valid");
    }
    else{
        printf("not valid");
    }
   return 0;
}