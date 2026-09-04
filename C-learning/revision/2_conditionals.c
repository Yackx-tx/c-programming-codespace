#include <stdio.h>

void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void run_conditionals_demo(void) {
    int score;
    char grade;

    printf("=== CONDITIONAL STATEMENTS DEMO ===\n\n");
    printf("Enter your exam score (0 - 100): ");

    if (scanf("%d", &score) != 1) {
        printf("Invalid input. Exiting program.\n");
        clearInputBuffer();
        return 1;
    }
    clearInputBuffer();

    /* 1. If - Else If - Else Ladder */
    if (score < 0 || score > 100) {
        printf("Error: Score out of range!\n");
        return 1;
    } else if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("-> Score: %d | Letter Grade: %c\n\n", score, grade);

    /* 2. Switch Case Statement */
    printf("Grade Assessment:\n");
    switch (grade) {
        case 'A':
            printf("   Excellent performance!\n");
            break;
        case 'B':
        case 'C':
            printf("   Good job! Keep pushing.\n");
            break;
        case 'D':
            printf("   You passed, but need review.\n");
            break;
        case 'F':
            printf("   Failed. Please re-take the module.\n");
            break;
        default:
            printf("   Unknown grade.\n");
    }

    /* 3. Ternary Operator (condition ? true_val : false_val) */
    printf("\nPass/Fail Status: %s\n", (score >= 50) ? "PASSED" : "FAILED");

    printf("\nPress Enter to exit...");
    getchar();
    return 0;
}
