#include<stdio.h>
int main(){
    int n,f=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //s=s+i;
        f=f*i;
        //printf("%d\n",f);
    }
    printf("%d",f);}