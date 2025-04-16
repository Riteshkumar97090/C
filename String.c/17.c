#include<stdio.h>
int main(){
    char str1[20];
    printf("enter string :");
    fgets(str1,20,stdin);

    char str2[20];
    printf("enter sec string :");
    fgets(str2,20,stdin);

    char str3[20];
    printf("enter third string :");
    fgets(str3,20,stdin);

    for(int i=0;str1[i]!='\0';i++){
        int num=0;
        if(str1[i]==str2[i]){
            if(str2[i]==str3[i]){
                printf("%c",str1[i]);
                num=1;
            }
        }
        if(num==0){
            break;
        }
    }
    return 0;
}