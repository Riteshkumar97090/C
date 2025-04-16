#include<stdio.h>
int main(){
    int n;
    printf("enter size :");
    scanf("%d",&n);
    printf("enter a number :\n");
    for(int i=1;i<=n;){
        int a;
        scanf("%d",&a);
        if(a==0||a==1){
           i++;
        }
        else{
            printf("invalide\n");
        }
    }
    return 0;
}