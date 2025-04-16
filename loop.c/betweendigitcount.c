#include<stdio.h>
int main(){
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int i=a+1;
    int c=0;
    while(i<n){         
    c++;
    i++;
    }
printf("%d",c);
    return 0;
}

// #include<stdio.h>
// int main(){
//     int i=2+1;
//     int n=6;
//     int c=0;
//     for(i;i<n;i++){
//         c++;
//     }
// printf("%d",c);
//     return 0;
// }