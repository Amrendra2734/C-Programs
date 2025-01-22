#include<stdio.h>
int main()
{
int first=0,second=1,next,n,t;
printf("Enter the number of terms: ");
scanf("%d",&n);
if(n==1){printf("%d",first);}
else if (n == 2){printf("%d\t%d",second);}

else{     for(t=3;t<=n;t++)
    {
        next=first + second;
        //printf("\t%d",next);
        first=second;
        second=next;
    }
    printf("\t%d",next);
}

}
