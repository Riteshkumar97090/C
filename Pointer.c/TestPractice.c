// #include<stdio.h>
// int main(){
//     char arr1="hello";
//     char arr2="Hello";

//     int i=0;
//     int count1=0;
//     while(arr1[i]!='\0'){
//         count1++;
//     }

//     return 0;
// }




#include<stdio.h>
int main(){
    char str1[50];
    char*ptr1=str1;
    printf("enter first string\n");
    fgets(ptr1,50,stdin);
     
    char str2[50];
    char*ptr2=str2;
    printf("enter second string\n");
    fgets(ptr2,50,stdin);

    char str3[50];
    char*ptr3=str3;
    int k=0;
    for(int i=0;ptr1[i]!='\0';i++){
        if(ptr1[i]=='\n')
        {
            continue;
        }
       ptr3[k]=ptr1[i];
       k++;
    }

    for(int i=0;ptr2[i]!='\0';i++)
    {
       ptr3[k]=ptr2[i];
       k++;
    }
    ptr3[k]='\0';
    puts(ptr3);
    return 0;
}