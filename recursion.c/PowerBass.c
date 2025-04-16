#include<stdio.h>
int powerbass(int a,int b){
    if(b==0) return 1;
    int rec=a*powerbass(a,b-1);
    return rec;
}
int main(){
    int a;
    printf("enter bass :");
    scanf("%d",&a);
    int b;
    printf("enter power :");
    scanf("%d",&b);
    int p=powerbass(a,b);
    printf("ans=%d",p);
    return 0;
}