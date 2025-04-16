#include<stdio.h>
int main (){
    char str[20];
    printf("enter any key :");
    fgets(str,20,stdin);
    int dcount=0;
    int charcount=0;
    int spacelcount=-1;
    for(int i=0;str[i]!='\0';i++){
        if (str[i]>='a' && str[i]<='z'){
            charcount++;
        }

        else if(str[i]>='0' && str[i]<='9'){
            dcount++;
        }
        else{
            spacelcount++;
        }
    }

    printf("digit :%d\n",dcount);
    printf("char :%d\n",charcount);
    printf("spacial :%d\n",spacelcount);
    return 0;
}