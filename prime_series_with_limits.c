#include <stdio.h>
void main() {
    int n1, n2, i,j,c,r1,r2;
    printf("Enter number: ");
    scanf("%d %d",&n1, &n2);
    if(n1>n2){r1=n2; r2=n1;}else{r1=n1; r2=n2;}
for(j=r1;j<=r2;j++)
    { c=0;
    for( int i = 2; i<=j; i++){
    if(j%i==0){c++;}
 }
 if(c==1){printf(" %d ",j);}

}

}
