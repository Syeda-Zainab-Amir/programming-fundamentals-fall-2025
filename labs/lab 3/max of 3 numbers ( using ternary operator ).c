#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Ask for three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Find maximum using ternary operator
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3)  : ((num2 > num3) ? num2 : num3);

    printf("The maximum number is: %d\n", max);

    return 0;
}

