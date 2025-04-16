// #include<stdio.h>
// int main(){
//     char c;
//     printf("enter your cherecter :");
//     scanf("%c",&c);
//     if(c=='a'||'b'||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'
//     ||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'w'||'x'||'y'||'z'){
//         printf("this charecter is alphabet");
//     }
//     else{
//         printf("not alphabet");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    char c;
    printf("enter your cherecter :");
    scanf("%c",&c);
    if((c>='A' && c<='Z')||(c>='a' && c<='z')){
        printf("this charecter is alphabet");
    }
    else{
        printf("not alphabet");
    }
    return 0;
}