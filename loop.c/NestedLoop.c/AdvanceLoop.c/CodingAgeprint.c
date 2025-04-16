#include<stdio.h>
int main(){
    int i;
    printf("enter start number :");
    scanf("%d",&i);
    int n;
    printf("enter last number :");
    scanf("%d",&n);
    for(i;i<=n;i++){
        if(i%2==0) printf("%d.coding\n",i);
        else printf("%d.age\n",i);
    }
    return 0;
}