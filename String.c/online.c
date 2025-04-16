// #include<stdio.h>
// int main(){
//     char str[30];
//     printf("enter string :");
//     fgets(str,30,stdin);
//     int size=0;
//     int k=0;
//     while(str[k]!='\0'){
//         size++;
//         k++;
//     } 

//     for(int i=0,j=size-1;i<=j;i++,j--){
//         char temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//     }
//     printf("%s",str);
//     return 0;
// }


#include<stdio.h>
int main(){
    char str[20];
    printf("enter string :");
    fgets(str,20,stdin);
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);

    return 0;
}