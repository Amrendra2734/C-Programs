#include<stdio.h>
int main(){
    int n,j,k,a;
printf("Enter number: ");
scanf("%d",&n);
k=0,a=n;
while(n!=0){
    j=n%10;
    k=(k*10)+j;
    n=n/10;
}
printf("%d\n",k);
if(k==a){printf("palindrome");}
else{printf("not palindrome");}
return 0;
}
