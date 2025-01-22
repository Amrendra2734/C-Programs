#include<stdio.h>
int main(){
      int n,j=0,k=0;
printf("Enter number: ");
scanf("%d",&n);
while(n!=0){
    j=n%10;
    n=n/10;
    if(j%2==0){k+=j;}
}

}
