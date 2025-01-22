#include<stdio.h>
int fib(int n);
int main(){
    int n,S=0;
    printf("The number of terms: ");
    scanf("%d",&n);
   for(int i = 1;i<=n;i++){
    S=S+fib(i);
   printf("%d\t",fib(i));
   }
   printf("\nSum of Fibonacci Series upto nth term = %d",S);
}
int fib(int n){
    
    if(n==1){
        return 0;
            }
        else if(n==2)
        {
            return 1;
        }
        else
        { 
            return fib(n-1)+fib(n-2);
            }
        
}