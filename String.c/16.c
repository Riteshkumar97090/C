#include<stdio.h>
int main(){
    char str[500];
    printf("enter string :");
    fgets(str,500,stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            printf("\n");
        }
        else{
            putchar(str[i]);
        }
    }
    return 0;
}