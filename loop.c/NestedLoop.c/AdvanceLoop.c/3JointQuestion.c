#include<stdio.h>
   int main(){
    for(;;){
    int np=0;
    int p=0;
    int f=0; 
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    if(a<=0){
    printf("you enter negative number so loop is stop");
    break;
    }
    int n=a;
    int i=2;
    while(n>i){
        if(n%i==0){
            np++;
            break;
        }
        i=i+1;
    }
    if(n==i){
       p++;
    }
    int x=a;
    int w=0;
    int b=1;
    int c=0;
    while(1){
      c=w+b;
      if(c>x){
        break;
      }
      w=b;
      b=c;
      if(c==a){
        f++;
      }
    }if(np==1){
        if(f==1){
            printf("%d is not prime but fibonacci number \n",a);
        }
        else{
            printf("%d is not prime and not fibonacci \n",a);
        }
    }
        if(p==1){
            if(f==1){
            printf("%d is prime and fibonacci number \n",a);    
            }
            else{
              printf("%d is prime but not fibonacci \n",a);   
            }
        }
    }
return 0;
   }