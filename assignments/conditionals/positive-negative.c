#include <stdio.h>
#include <stdlib.h>

/*10.Write a C program to check whether a number is positive, negative or zero using if statement.*/

int main(void) {
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num > 0) {
        printf("The number is Positive.\n");
    } else if (num < 0) {
        printf("The number is Negative.\n");
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}
