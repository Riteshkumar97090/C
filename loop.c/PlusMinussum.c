//1-2+3-4+5-6+7
#include<stdio.h>
int main (){
  int n;
  printf("enter a table :");
  scanf("%d",&n);
  int s=0;
  for(int i=1;i<=n;i++){
    if(i%2!=0) s=s+i;
    else       s=s-i;
  }
  printf("%d",s);
  return 0;
}