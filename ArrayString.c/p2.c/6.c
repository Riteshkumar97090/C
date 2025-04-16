#include<stdio.h>
int main(){
    char str[20];
    printf("enter string :");
    fgets(str,20,stdin);
    int count=-1;

    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("count :%d",count);
    return 0;
}