//0 1 1 2 3 5 8
// #include<stdio.h>
// int main(){
//     int n,a=0,b=1,c;
//     printf("enter a number :");
//     scanf("%d",&n);
//         for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }


#include<stdio.h>
int feb(int n){
    int a=0;
    int b=1;
    int c=0;
    for(int i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main(){
    int a=feb(5);
    printf("%d",a);
    
    return 0;
}