#include<stdio.h>
int main(){
	char str[50];
    printf("enter string :");
	fgets(str,50,stdin);
	char str2[70];
	int a=0,num=0,b=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			for(int j=i+1;str[j]!='\0';j++){
				str2[a]=str[j];
				num=1;
				a++;
				b++;
			}
		}
		if(num==1){
			break;
		}
	}
	for(int i=0;i<b;i++){
		printf("%c",str2[i]);
	}
	printf("\n");
	printf("Words to remove: ");
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			break;
		}
		printf("%c",str[i]);
	}
}
