#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Input two integers
    printf("Enter first number: ");
    scanf("%d", &a);

    // Input the operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 

    // Input the second integer
    printf("Enter second number: ");
    scanf("%d", &b);

    // Perform operation based on operator
    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;

        case '-':
            printf("Result: %d\n", a - b);
            break;

        case '*':
            printf("Result: %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result: %.2f\n", (float)a / b);
            else
                printf("Error: Division by zero\n");
            break;

        case '%':
            if (b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Error: Modulus by zero\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}

