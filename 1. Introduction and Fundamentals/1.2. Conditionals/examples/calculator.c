#include <stdio.h>

int main() {
    int num1, num2, option;
    float result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("=====================\n");
    printf("|   1. add          |\n");
    printf("|   2. subtract     |\n");
    printf("|   3. multiply     |\n");
    printf("|   4. divide       |\n");
    printf("=====================\n");
    printf("Select an option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid option selected.\n");
            break;
    }

    return 0;
}