#include <stdio.h>
#include <stdlib.h>

/*9.Write a C program to check whether a number is even or odd using if statement.*/

int main(void) {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    return 0;
}
