#include<stdio.h>
#include<String.h>
int main(){
    char str[20];
    printf("enter string :");
    fgets(str,20,stdin);

    // int a=strlen(str);
    // printf("%d",a);

    int count=-1;

    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("char count :%d",count);
    return 0;
}