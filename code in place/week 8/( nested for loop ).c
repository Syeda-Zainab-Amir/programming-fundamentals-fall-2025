#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("Pairs with even sum:\n");

    // Outer loop for first number in pair
    for (i = 1; i <= n; i++) {
        // Inner loop for second number in pair
        for (j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                printf("(%d,%d) ", i, j);
            }
        }
    }

    printf("\n");
    return 0;
}

