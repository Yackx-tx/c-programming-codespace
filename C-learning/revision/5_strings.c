#include <stdio.h>
#include <string.h>

void run_strings_demo(void) {
    char firstName[30] = "Yannick";
    char lastName[30] = "Gisubizo";
    char fullName[60];
    char userInput[50];

    printf("=== STRINGS DEMONSTRATION ===\n\n");

    /* 1. String Copying (strcpy) */
    strcpy(fullName, firstName);

    /* 2. String Concatenation (strcat) */
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("1. First Name : %s\n", firstName);
    printf("2. Last Name  : %s\n", lastName);
    printf("3. Full Name  : %s\n", fullName);

    /* 3. String Length (strlen) */
    printf("4. Length of Full Name : %u characters\n\n", (unsigned int)strlen(fullName));

    /* 4. Reading String Input with fgets */
    printf("Enter your favorite programming language: ");
    if (fgets(userInput, sizeof(userInput), stdin) != NULL) {
        /* Remove trailing newline character added by fgets */
        userInput[strcspn(userInput, "\n")] = '\0';
        printf("You entered: \"%s\"\n", userInput);
    }

    /* 5. String Comparison (strcmp) */
    if (strcmp(userInput, "C") == 0 || strcmp(userInput, "c") == 0) {
        printf("Great choice! C is powerful and fast.\n");
    } else {
        printf("Nice! %s is a great language too.\n", userInput);
    }

    printf("\nPress Enter to exit...");
    getchar();
    return 0;
}
