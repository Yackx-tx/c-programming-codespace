#include <stdio.h>
#include <stdlib.h>


int main(void) {
    char op;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    if (op == '+') {
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    } else if (op == '-') {
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    } else if (op == '*') {
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        } else {
            printf("Error: Division by zero is undefined.\n");
        }
    } else {
        printf("Error: Invalid operator choice.\n");
    }

    return 0;
}
