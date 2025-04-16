// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[20];
//     printf("enter first string :");
//     fgets(str1,20,stdin);

//     char str2[30];
//     printf("enter second string :");
//     fgets(str2,30,stdin);

//     strcat(str1,str2);
//     puts(str1);


//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array element :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("output :\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}