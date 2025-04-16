#include<stdio.h>
int main(){
    FILE *f;

    f=fopen("string.txt","w");
    fputs("coding age",f);      //string writing in file
    fclose(f);


    f=fopen("string.txt","r"); 

    char str[20];
    fgets(str,sizeof(str),f);   //string read from file
    puts(str);
    fclose(f);


    f=fopen("string.txt","a");    //append 
    fputs(" ram",f);

    fclose(f);

    return 0;
}