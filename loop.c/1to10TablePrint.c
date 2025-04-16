#include<stdio.h>
int main(){
  int i,n;
  printf("enter start table :");
  scanf("%d",&i);
  printf("enter last table  :");
  scanf("%d",&n);

  for(i;i<=n;i++){
    for(int j=1;j<=10;j++){
      int c=j*i;
      printf("%2d  ",c);
    }
    printf("\n");
  }
  return 0;
}