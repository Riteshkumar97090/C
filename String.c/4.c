#include<stdio.h>
int main(){
	char str[20];
	printf("enter string :");
	fgets(str,20,stdin);

	int a=0,b=0;
	char str2[20];
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			continue;
		}
		for(int j=i;j<=i+1;j++){
			if(j==i+1){
				str2[a]=' ';
				a++;
				b++;
			}
			else{
				str2[a]=str[i];
				a++;
				b++;
			}
	}
}
for(int i=0;i<b;i++){
	printf("%c",str2[i]);
}
    return 0;
}