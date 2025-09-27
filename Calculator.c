#include <stdio.h>

void showMenu() {
    printf("\n===== Simple Calculator =====\n");
    printf("Select an operation to perform:\n");
    printf(" + : Addition\n");
    printf(" - : Subtraction\n");
    printf(" * : Multiplication\n");
    printf(" / : Division\n");
    printf(" q : Quit\n");
    printf("=============================\n");
}

int main() {
    char operator;
    double num1, num2, result;

    while (1) {
        showMenu();

        printf("Enter operator (+, -, *, /, q): ");
        scanf(" %c", &operator);  // Notice the space before %c

        if (operator == 'q' || operator == 'Q') {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Cannot divide by zero!\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
        }
    }

    return 0;
}
