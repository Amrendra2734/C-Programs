#include <stdio.h>
void main() {
int i,j=0,n;
printf("Enter the no.of even numbers:");
scanf("%d",&n);
for (i=1;i<=n;i++){
printf("%d\n",i);
if (i%2==0)
{j=j+i;}}
printf("sum%d",j);
}
