#include<stdio.h>
int main(){
    int n1,n2,gcf;
    printf("enter two number :");
    scanf("%d %d",&n1,&n2);

    for(int i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0)
        gcf=i;
    }
    printf("gcf of %d and %d is: %d",n1,n2,gcf);
    return 0;
}