#include<stdio.h>
int main(){
    FILE *ptr=fopen("data.txt","w");

    for(int i=1;i<20;i++){
        if(i%2==0){
            fprintf(ptr,"%d\n",i);
        }
    }

    fclose(ptr);
    return 0;
}