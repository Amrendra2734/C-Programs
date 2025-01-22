#include<stdio.h>
int sumdig();
int main(){
sumdig();
}
int sumdig(){
    int n,j,s=0;
    scanf("%d",&n);
    while(n!=0){
        j=n%10;
        n=n/10;
        s=s+j;
       
    }
    printf("%d",s);
    return 0;
}