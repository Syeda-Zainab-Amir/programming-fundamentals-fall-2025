#include <stdio.h>

int main() {
    int i = 1; // Outer loop for tables from 1 to 5

    while (i <= 5) {
        int j = 1; // Inner loop for each table (1 to 10)
        printf("Table of %d:\n", i);

        while (j <= 10) {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }

        printf("\n"); // Blank line between tables
        i++;
    }

    return 0;
}

