#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0, copy1, copy2, d = 0;


    printf("Enter a number: ");
    scanf("%d", &num);

    copy1 = copy2 = num;

 
    while (copy2 != 0) {
        copy2 = copy2 / 10;
        d++;
    }


    while (copy1 != 0) {
        sum = sum + (int)pow(copy1 % 10, d);  
        copy1 = copy1 / 10;
    }

  
    printf("Sum of digits raised to the power %d is: %d\n", d, sum);


    if (sum == num) {
        printf("ARMSTRONG\n");
    } else {
        printf("NO ARMSTRONG\n");
    }

    return 0;
}
