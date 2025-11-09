#include <stdio.h>
#include <string.h>

int main() {
    char first[50] = "Syeda";
    char last[] = " Zainab";

    strcat(first, last);
    printf("Full name: %s\n", first);
    return 0;
}

