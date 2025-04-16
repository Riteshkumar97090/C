#include<stdio.h>
int main (){
  int rev=0;
  int rem;
  int n;
  printf("enter a table :");
  scanf("%d",&n);
  int a=n;
  int s;
  for(int i=1;n>0;i++){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    s=a+rev;
    }
    printf("%d ",s);
  return 0;
}