#include <stdio.h>

int main() {
    int num, i;
    long int factorial = 1;  // Simpler term, but can hold only up to ~12!

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %ld\n", num, factorial);
    }

    return 0;
}


