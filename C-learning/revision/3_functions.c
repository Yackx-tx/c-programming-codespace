#include <stdio.h>

/* Function Declarations (Prototypes) */
void printHeader(void);
int addNumbers(int num1, int num2);
float celsiusToFahrenheit(float celsius);
int findMax(int x, int y);

void run_functions_demo(void) {
    int sum, maxVal;
    float tempF;

    printHeader();

    /* Function 1: Addition */
    sum = addNumbers(15, 27);
    printf("1. addNumbers(15, 27) = %d\n\n", sum);

    /* Function 2: Temperature Conversion */
    tempF = celsiusToFahrenheit(25.0f);
    printf("2. celsiusToFahrenheit(25.0 C) = %.2f F\n\n", tempF);

    /* Function 3: Finding Maximum */
    maxVal = findMax(42, 89);
    printf("3. findMax(42, 89) = %d\n\n", maxVal);

    printf("Press Enter to exit...");
    getchar();
    return 0;
}

/* Function Definitions */

void printHeader(void) {
    printf("===================================\n");
    printf("       C FUNCTIONS DEMONSTRATION   \n");
    printf("===================================\n\n");
}

int addNumbers(int num1, int num2) {
    return num1 + num2;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

int findMax(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}
