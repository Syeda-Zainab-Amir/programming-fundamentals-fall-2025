#include <stdio.h>

int main() {
    int age;
    int hasID;  // 1 for yes, 0 for no

    // Ask for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Ask if they have a valid ID
    printf("Do you have a valid ID? (1 for Yes, 0 for No): ");
    scanf("%d", &hasID);

    // Check eligibility
    if (age >= 18 && hasID == 1) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

