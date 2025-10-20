#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Make a copy of original number if needed
    int original = num;

    // In case the number is 0, still run the loop once
    do {
        digit = num % 10;    // Get last digit
        sum += digit;        // Add to sum
        num = num / 10;      // Remove last digit
    } while (num != 0);

    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}

