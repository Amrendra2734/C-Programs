#include<stdio.h>
int SumNat(int n);
int main(){
    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    printf("The sum of n natural numbers = %d",SumNat(n));
    }
int SumNat(int n){
    if(n>=1){
        return n + SumNat(n-1);
    }
}

