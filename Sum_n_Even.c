#include<stdio.h>
int main(){
    int n,i,sum=0,c=0;
    scanf("%d",&n);
    for(i=0;;i = i+2){
        c++;
        // printf("%d\n",c);
       sum=sum+i;
      if(c==n){break;}

    }
   
    printf("%d\n",sum);
}