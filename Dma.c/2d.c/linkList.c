#include<stdio.h>
struct node{
    int a;
    struct node *n;
}abhi,ravi,shivam;
int main(){
    abhi.a=1;
    abhi.n=NULL;
    ravi.a=2;
    abhi.n=&ravi;
    ravi.n=NULL;
    shivam.a=3;
    ravi.n=&shivam;
    shivam.n=NULL;

    struct node *start;
    start=&abhi;
    while(start!=NULL){
        printf("%d -> ",start->a);
        start=start->n;
    }
    return 0;
}