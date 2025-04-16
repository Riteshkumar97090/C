//343==343 p0lindrom,234==432 not polindrom
#include<stdio.h>
int main(){
    int a;
    printf("enter first digit :");
    scanf("%d",&a);
    int n;
    printf("enter last digit :");
    scanf("%d",&n);
    while(a<=n){
    int rem=0, rev=0;
    int i=a;
    while(i>0){
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;
    }
    if(a==rev)  printf("%d is palindrom\n",a);
    a++;
    }
    return 0;
}