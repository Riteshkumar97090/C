#include<stdio.h>
int main(){
    char str[20]="riteshkumaryadav";
    int cv=0;
    int cc=0;
    for(int i=0;i<20;i++){
        if(str[i]>='a' && str[i]<='z'){
            if(str[i]=='a' || str[i]=='A'){
                cv++;
            }
            else if(str[i] == 'e' || str[i] == 'E'){
                cv++;
            }
            else if(str[i]=='i' || str[i]=='I'){
                cv++;
            }
            else if(str[i]=='o' || str[i]=='O'){
                cv++;
            }
            else if(str[i]=='u' || str[i]=='U'){
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
