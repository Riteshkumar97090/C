#include<stdio.h>
int main(){
    int n;
    printf("enter binary num :");
    scanf("%d",&n);
    int ans=0;
    int st=1;     //power of 2
    while(0<n){
        int unitd=n%10;
        ans+=(unitd*st);
        n/=10;
        st*=2;
    }
    printf("desimal no is :%d",ans);
    return 0;
}