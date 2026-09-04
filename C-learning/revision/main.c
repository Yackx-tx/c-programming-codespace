#include <stdio.h>

/* Function declarations */
void run_operators_demo(void);
void run_conditionals_demo(void);
void run_functions_demo(void);
void run_loops_demo(void);
void run_strings_demo(void);

int main(void) {
    int choice;

    do {
        printf("=====================================\n");
        printf("        C LEARNING MENU              \n");
        printf("=====================================\n");
        printf("1. Operators Demo\n");
        printf("2. Conditionals Demo\n");
        printf("3. Functions Demo\n");
        printf("4. Loops Demo\n");
        printf("5. Strings Demo\n");
        printf("0. Exit\n");
        printf("-------------------------------------\n");
        printf("Enter your choice (0-5): ");

        /* Read user input and handle non-integer errors */
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); /* Clear invalid input from buffer */
            choice = -1;
        }
        while (getchar() != '\n'); /* Clear trailing newline character */

        printf("\n-------------------------------------\n");

        switch (choice) {
            case 1:
                run_operators_demo();
                break;
            case 2:
                run_conditionals_demo();
                break;
            case 3:
                run_functions_demo();
                break;
            case 4:
                run_loops_demo();
                break;
            case 5:
                run_strings_demo();
                break;
            case 0:
                printf("Exiting program. Happy coding!\n");
                break;
            default:
                printf("Invalid option! Please enter a number from 0 to 5.\n");
                break;
        }

        /* Pause screen before returning to the menu */
        if (choice != 0) {
            printf("\n-------------------------------------\n");
            printf("Press Enter to return to the main menu...");
            getchar();
            printf("\n\n");
        }

    } while (choice != 0);

    return 0;
}
