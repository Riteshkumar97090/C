// #include<stdio.h>
// int main(){
//     int arr[3]={1,2,3};

//     // printf("%p\n",arr);
//     // printf("%p\n",&arr[0]);

//     int *ptr=arr;

//     // printf("%d\n",arr[0]);
//     //  printf("%d\n",*ptr);
//     // printf("%d\n",ptr[0]);

//     for(int i=0;i<3;i++){
//         //printf("%d ",ptr[i]);
//         printf("%d ",*(ptr+i));
          
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int *ptr;
//     int a[5];
//     for(int i=0;i<5;i++){
//         a[i]=i+5;
//     }
//     ptr=a;
//     for(int i=0;i<5;i++){
//         printf("%d\n",*(ptr+i));
//     }

//     printf("%p=%p",ptr,a);
//     return 0;
// }



#include<stdio.h>
int main(){
    int *ptr;
    int a[5];
    printf("enter element :\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    ptr=a;
    printf("output :\n");
    for(int i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}