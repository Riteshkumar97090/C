#include<stdio.h>
int main(){
    int *ptr;
    int arr[5];
    printf("enter element :\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    printf("output :\n");
    for(int i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}




// #include<stdio.h>
// int main()
// {
//     char str[100];
//     printf("enter string\n");
//     fgets (str,100,stdin);
//     char str1[100];
//     int count=0;
//     int k=0;
//     for(int i=0;str[i]!='\0';i++)
//     {
//      count++;
//     }
//     count =count -2;
//     for(int j=count;str[j]!='\0';j--)
//     {
//        if(str[j]=='\n')
//        {
//          continue ;
//        }
//        str1[k]=str[j];
//        k++;
//     }
//     str1[k]='\0';
//     puts (str1);
//     return 0;
// }
