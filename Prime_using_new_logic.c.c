#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    
    if(num <= 1){
        printf("Not Prime");
        return 0;
    }

    
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            printf("Not Prime");
            return 0;  
        }
    }
    
    // If no factor is found
    printf("Prime");
    return 0;
}
