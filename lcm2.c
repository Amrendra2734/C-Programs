#include<stdio.h>
int main(){
    int a,b,c,r;
			scanf("%d %d",&a,&b);
		
			if(a>b){r=a;}else{r=b;}
			for( int i=r; ;i++){
				if((i%a==0)&&(i%b==0)){
				printf("%d",i);
                    break;
				}
			}
		
            return 0;
}