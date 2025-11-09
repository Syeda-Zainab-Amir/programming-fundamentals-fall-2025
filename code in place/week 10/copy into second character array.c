#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Programming";
    char dest[5];  // space for 4 letters + '\0'

    strncpy(dest, src, 4);
    dest[4] = '\0'; // ensure null-termination

    printf("Copied (first 4 letters): %s\n", dest);
    return 0;
}

