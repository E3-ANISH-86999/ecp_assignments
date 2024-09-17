#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    do {
        printf("**** Simple Calculator ****\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers to add: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", num1 + num2);
                break;

            case 2:
                printf("Enter two numbers to subtract (a - b): ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", num1 - num2);
                break;

            case 3:
                printf("Enter two numbers to multiply: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", num1 * num2);
                break;

            case 4:
                printf("Enter two numbers to divide (a / b): ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    printf("Result: %.2f\n", num1 / num2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option (1-5).\n");
                break;
        }

    } while (choice != 5);

    return 0;
}
