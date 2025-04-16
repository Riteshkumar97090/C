//343==343 p0lindrom,234==432 not polindrom
#include<stdio.h>
int main(){
    int n;
    printf("enter digit :");
    scanf("%d",&n);
    int rem=0;
    int rev=0;
    int r=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(r==rev)printf("%d is palindrom",r);
    else printf("%d is not palindrom",r);
    return 0;
}