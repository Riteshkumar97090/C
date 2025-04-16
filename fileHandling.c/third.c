#include<stdio.h>
int main(){
    FILE *f=fopen("formate.txt","w");
    int i=100; char c='A'; float a=25.0;

    fprintf(f,"%d\n %c\n %f\n",i,c,a);
    fclose(f);

    f=fopen("formate.txt","r");

    int m;char n;float p;
    fscanf(f,"%d\n%c\n%f",&m,&n,&p);
    printf("%d %c %f",m,n,p);

    fclose(f);

    return 0;
}