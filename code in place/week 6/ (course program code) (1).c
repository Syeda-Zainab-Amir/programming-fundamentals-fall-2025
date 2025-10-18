#include <stdio.h>

int main() {
    int program, year;

    // Ask for program type
    printf("Select Program Type:\n");
    printf("1 = Computer Science\n");
    printf("2 = Electrical Engineering\n");
    printf("Enter your choice: ");
    scanf("%d", &program);

    // Outer switch for program type
    switch (program) {
        case 1: // Computer Science
            printf("You selected Computer Science.\n");
            printf("Enter Year (1 = First Year, 2 = Second Year): ");
            scanf("%d", &year);

            // Inner switch for year
            switch (year) {
                case 1:
                    printf("Courses:\n");
                    printf("- Introduction to Programming\n");
                    printf("- Mathematics I\n");
                    printf("- Computer Fundamentals\n");
                    break;
                case 2:
                    printf("Courses:\n");
                    printf("- Data Structures\n");
                    printf("- Discrete Mathematics\n");
                    printf("- Object-Oriented Programming\n");
                    break;
                default:
                    printf("Invalid year selected.\n");
            }
            break;

        case 2: // Electrical Engineering
            printf("You selected Electrical Engineering.\n");
            printf("Enter Year (1 = First Year, 2 = Second Year): ");
            scanf("%d", &year);

            // Inner switch for year
            switch (year) {
                case 1:
                    printf("Courses:\n");
                    printf("- Basic Electrical Engineering\n");
                    printf("- Engineering Physics\n");
                    printf("- Mathematics I\n");
                    break;
                case 2:
                    printf("Courses:\n");
                    printf("- Circuit Theory\n");
                    printf("- Analog Electronics\n");
                    printf("- Signals and Systems\n");
                    break;
                default:
                    printf("Invalid year selected.\n");
            }
            break;

        default:
            printf("Invalid program type selected.\n");
    }

    return 0;
}

