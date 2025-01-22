#include<stdio.h>
 int k=0;
int Reverse(int n);
int main(){
    int n,a;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    
    // Reverse(n);
    a= Reverse(n);
     printf("The Reverse of digits of the given number= %d",a);
     
     if(a==n){printf("\nPallindrome");}
     else{printf("\nNot Pallindrome");}
    }
int Reverse(int n){
    
    if(n!=0){
        k= k*10+(n%10);
        Reverse(n/10);
       
    //   r=r+ n%10;
    //   printf("%d",r);
     }
     return k;
}
