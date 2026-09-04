#include <stdio.h>

void run_loops_demo(void) {
    int i, j;
    int count = 1;

    printf("=== LOOPS DEMONSTRATION ===\n\n");

    /* 1. FOR Loop */
    printf("1. FOR LOOP (Counting 1 to 5):\n   ");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    /* 2. WHILE Loop */
    printf("2. WHILE LOOP (Countdown 5 to 1):\n   ");
    count = 5;
    while (count > 0) {
        printf("%d ", count);
        count--;
    }
    printf("\n\n");

    /* 3. DO-WHILE Loop */
    printf("3. DO-WHILE LOOP (Executes at least once):\n   ");
    count = 100;
    do {
        printf("Runs once even if condition (count < 10) is false! [count = %d]\n", count);
    } while (count < 10);
    printf("\n");

    /* 4. NESTED LOOPS */
    printf("4. NESTED LOOPS (3x3 Grid):\n");
    for (i = 1; i <= 3; i++) {
        printf("   Row %d: ", i);
        for (j = 1; j <= 3; j++) {
            printf("[%d,%d] ", i, j);
        }
        printf("\n");
    }

    printf("\nPress Enter to exit...");
    getchar();
    return 0;
}
