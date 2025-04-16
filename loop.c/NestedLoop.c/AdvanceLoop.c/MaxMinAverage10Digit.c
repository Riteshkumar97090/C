#include<stdio.h>
int main(){
    int n=10;
    int max=-999;
    int min=999;
    float sum=0;
    printf("enter a number :\n");
    for(int i=1;i<=n;i++){
        int a;
    scanf("%d",&a);
        if(a>max){
            max=a;
        }
        if(min>a){
            min=a;
        }
        sum=sum+a;
    }
    printf("Average is %f\n",sum/n);
    printf("Maximum is %d\n",max);
    printf("Minimum is %d\n",min);
    return 0;
}