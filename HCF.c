#include<stdio.h>
int main(){
    int a,b,c;
		scanf("%d %d",&a,&b);
		int y;
		int r;
		if(a<b){r=a;}else{r=b;}
		for(int i=1;i<=r;i++){
			if((a%i==0)&&(b%i==0)){
				 c=i;
				 }
				 y++;
        }
 printf("%d %d", c,y);
}