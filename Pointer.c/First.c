// #include<stdio.h>
// int main(){

//     int a=5;
//     int *ptr=&a;

//     printf("%p \n",&a);
//     printf("%p \n",&ptr);

//     printf("%d \n",sizeof(ptr));

//     return 0;
// }


#include<stdio.h>
void swap(int*p1,int*p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    }
    
int main(){
    int a=5;      int b=10;
    int *p1=&a;   int *p2=&b;
    
    printf("a=%d , b=%d\n",a,b);
    swap(p1,p2);
    printf("a=%d , b=%d\n",a,b);
   
    return 0;
}