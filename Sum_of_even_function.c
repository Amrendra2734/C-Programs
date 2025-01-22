#include<stdio.h>
int SumEven(int n);
int main(){
    int S;
    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    if(n%2==0){S=SumEven(n);}
    else{S=SumEven(n-1);}
    printf("The sum of n natural numbers = %d",S);
    }
int SumEven(int n){

        if(n>=0){return n+SumEven(n-2);
            
        }
      return 0;  
}

