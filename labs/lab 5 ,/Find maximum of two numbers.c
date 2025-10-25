#include <stdio.h>

int main() {
    int num1, num2;

    // Ask for two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    
    if (num1 != num2) {
        printf("The numbers are not equal.\n");

        if (num1 > num2) {
            printf("Number 1 is greater than Number 2.\n");
        } else {
            printf("Number 2 is greater than Number 1.\n");
        }
    } else {
        printf("The numbers are equal.\n");
    }

    return 0;
}

