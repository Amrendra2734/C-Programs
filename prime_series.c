#include <stdio.h>
void main() {
    int num, i,j,c;
    printf("Enter number: ");
    scanf("%d", &num);
for(j=2;j<=num;j++)
    { c=0;
    for( int i = 1; i<=j; i++){
    if(j%i==0){c++;}
 }
 if(c==2){printf("Prime %d\n",j);}

}

}
