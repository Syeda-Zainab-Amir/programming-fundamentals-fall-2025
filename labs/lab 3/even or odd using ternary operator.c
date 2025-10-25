#include <stdio.h>

int main() {
    int num;

    // Ask for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check even or odd using ternary operator
    (num % 2 == 0) ? printf("The number is even.\n") : printf("The number is odd.\n");

    return 0;
}

