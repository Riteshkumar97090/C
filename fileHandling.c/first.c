#include<stdio.h>
int main(){

    FILE *fptr=fopen("myFile.txt","w");
    fprintf(fptr,"hello");
    fclose(fptr);
    
    return 0;
}