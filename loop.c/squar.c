#include<stdio.h>
int main(){
    int i=1;
    long a;
    printf("enter base :");
    scanf("%lu",&a);
    long n;
    printf("enter power :");
    scanf("%lu",&n);
    long base=a;
    while(i<n){
        a=a*base;
        i++;
    }
    printf("%lu",a);
    return 0;
}