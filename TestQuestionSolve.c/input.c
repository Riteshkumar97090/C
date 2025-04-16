         // intput:5    output:ABCDE
// #include<stdio.h>
// int main(){ 
//     int j=65;
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%c,",j); 
//         j++;
//     }
//     return 0;
// }


               //input:3   output:C

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter array size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter counting element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    char str[n];
    printf("enter String :");
    scanf("%s",&str);


    // int temp=64;
    // printf("%c",n+temp);
    return 0;
}


