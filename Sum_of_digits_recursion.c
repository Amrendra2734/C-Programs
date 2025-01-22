#include<stdio.h>
 int r=0;
int SumDigR(int n);
int main(){
    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    // SumDigR(n);
     printf("The sum of digits of the given numbers = %d",SumDigR(n));
    }
int SumDigR(int n){
    if(n!=0){
        return n%10 +
         SumDigR(n/10);
       
    //   r=r+ n%10;
    //   printf("%d",r);
     }
     return 0;
}

