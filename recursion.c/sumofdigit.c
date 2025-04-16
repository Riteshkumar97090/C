// #include<stdio.h>
// int main(){
//     int sum=0;
//     int rem=0;
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     while(n!=0){
//         rem=n%10;
//         sum=sum+rem;
//         n=n/10;
//     }
//     printf("sum =%d",sum);
//     return 0;
// }



#include<stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sum (n/10);
}
int main(){

    int ans=sum(153);
    printf("%d",ans);
    return 0;
}