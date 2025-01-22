#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number : ");
    scanf("%d %d", &a, &b);
    int r, c;

    r = (a > b) ? a : b;  

    for (int i = r;; i++) { // Infinite loop to find the first multiple
        if ((i % a == 0) && (i % b == 0)) {
            c = i;
            break; 
        }
    }

    printf("%d", c);
    return 0;
}
