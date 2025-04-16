#include<stdio.h>
int main(){
    char str[30];
    printf("enter string :\n");
    fgets(str,30,stdin);
    
    int count=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        } 
    }
    printf("word count :%d",count);
    return 0;
}
