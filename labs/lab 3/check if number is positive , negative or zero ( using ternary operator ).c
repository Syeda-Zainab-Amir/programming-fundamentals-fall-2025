#include <stdio.h>

int main() {
    int num;

    // Ask for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check using ternary operator
    (num > 0) ? printf("The number is positive.\n") :
    (num < 0) ? printf("The number is negative.\n") :
                printf("The number is zero.\n");

    return 0;
}

