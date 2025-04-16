#include<stdio.h>
int main(){
    char str[20]="riteshkumaryadav";
    int cv=0;
    int cc=0;
    for(int i=0;i<20;i++){
        if((str[i]>='a' && str[i]<='z')){
            if(str[i]=='a'){
                cv++;
            }
            else if(str[i] == 'e'){
                cv++;
            }
            else if(str[i]=='i'){
                cv++;
            }
            else if(str[i]=='o'){
                cv++;
            }
            else if(str[i]=='u'){
                cv++;
            }
        else{
            cc++;
        } 
    }
    }
    printf("vowel :%d\n",cv);
    printf("consunent :%d",cc);
    return 0;
}
