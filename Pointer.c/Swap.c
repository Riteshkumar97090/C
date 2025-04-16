#include<stdio.h>
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    int a=2;
    int b=3;
    int *p1=&a;
    int *p2=&b;

    swap(p1,p2);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    

    return 0;
}