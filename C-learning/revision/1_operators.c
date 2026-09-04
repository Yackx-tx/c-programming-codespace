#include <stdio.h>

void run_operators_demo(void) {
    int a = 12, b = 5;

    printf("=== C OPERATORS DEMO ===\n\n");

    /* 1. Arithmetic Operators */
    printf("1. ARITHMETIC OPERATORS (a = %d, b = %d):\n", a, b);
    printf("   Addition       (a + b) = %d\n", a + b);
    printf("   Subtraction    (a - b) = %d\n", a - b);
    printf("   Multiplication (a * b) = %d\n", a * b);
    printf("   Division       (a / b) = %d  (integer division)\n", a / b);
    printf("   Modulus        (a %% b) = %d  (remainder)\n\n", a % b);

    /* 2. Relational Operators */
    printf("2. RELATIONAL OPERATORS (1 = True, 0 = False):\n");
    printf("   Is a equal to b?        (a == b) : %d\n", a == b);
    printf("   Is a not equal to b?    (a != b) : %d\n", a != b);
    printf("   Is a greater than b?    (a > b)  : %d\n\n", a > b);

    /* 3. Logical Operators */
    printf("3. LOGICAL OPERATORS:\n");
    printf("   (a > 10 && b < 10) [AND] : %d\n", (a > 10 && b < 10));
    printf("   (a > 10 || b > 10) [OR]  : %d\n", (a > 10 || b > 10));
    printf("   !(a == b)          [NOT] : %d\n\n", !(a == b));

    /* 4. Increment / Decrement Operators */
    printf("4. INCREMENT & DECREMENT:\n");
    printf("   Original a : %d\n", a);
    a++;
    printf("   After a++  : %d\n", a);
    a--;
    printf("   After a--  : %d\n\n", a);

    printf("Press Enter to exit...");
    getchar();
    return 0;
}
