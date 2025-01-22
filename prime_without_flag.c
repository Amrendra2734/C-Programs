#include <stdio.h>

void main() {
    int num, i,j=0;
    printf("Enter number: ");
    scanf("%d", &num);


    if (num <= 1) {
        printf("NOT PRIME");
        return;
    }

    for(i = 2; i <=num/2 ; i++) {
            j++;
            printf("%d",j);
        if (num % i == 0) {
            printf("NOT PRIME");

            return;  
        }
    }

    
    printf("PRIME");

}
