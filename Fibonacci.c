#include<stdio.h>
int main()
{
int first=0,second=1,next,n,t,sum = 1;
printf("Enter the number of terms: ");
scanf("%d",&n);
if(n==1){printf("%d",first);}
else{printf("%d\t%d",first,second);
     for(t=3;t<=n;t++)
    {
        next=first + second;
        sum = sum + next ;
        printf("\t%d",next);
        first=second;
        second=next;
      
    }
    printf("\n%d",sum);
}

}
