#include<stdio.h>
int main(){
    int n,j,k;
printf("Enter number: ");
scanf("%d",&n);
k=0;
while(n!=0){
    j=n%10;
    k=(k*10)+j;
    n=n/10;
}
printf("%d",k);
return 0;
}
