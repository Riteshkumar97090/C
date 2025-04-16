// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int a=65;
//     int b=65+n-1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j){
//                 printf("%c",a);
//                 a++;
//             }
//             else if(i+j==n+1){
//                 printf("%c",b);
//                 if(i==n/2 && j==n/2+2){
//                     b=b-2;
//                 }
//                 else{
//                     b--;
//                 }
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int a=97;
//     int b=1;
//     for(int i=1;i<=n;i++){
//         printf("%c",a);
//         a++;
//     }
//     printf("\n");
//     for(int j=1;j<n;j++){
//         for(int k=j+1;k<n;k++){
//             printf(" ");
//         }
//         if(j==n-1){
//             for(int l=1;l<=n;l++){
//                 printf("%c",a-32);
//                 a++;
//             }
//         }
//         else{
//             for(int m=1;m<=j+1;m++){
//                 printf("%d",b);
//                 b++;
//             }
//         }
//         printf("\n");
//     }
  
//     return 0;
// }






// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int c=1,a=1,b=97;
//     for(int i=1;i<=n;i++){
//             for(int k=i;k<n;k++)      printf(" ");
//             for(int j=1;j<=c;j++){
//             if(i==1)        printf("*");
//             else if(i==n)   printf("#");
//             else if(j==1){
//                 printf("%d",a);
//                 a++;
//             }
//             else if(j==c){
//                 printf("%c",b);
//                 b++;
//             }
//             else        printf(" ");
//         }
//         c+=2;
//         printf("\n");
//     }
//     return 0;
// }






// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int a=97;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||i==n){
//                 printf("*");
//             }
//             else if(j==1||j==n){
//                 printf("#");
//             }
//             else{
//                 printf("%c",a);
//                 a++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     int m=n,s=n;
//     int rem,count=0,rev;
//     while(n>0){
//         rem=n%10;
//         for(int i=2;i<rem;i++){
//             if(rem%i==0){
//                 count=1;
//                 break;
//             }
//         }
//         if(count==0) printf("%d is prime number\n",rem);
//     }
//     n=n/10;
//     return 0;
// }






