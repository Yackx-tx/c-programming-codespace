#include <stdio.h>
#include <stdlib.h>

/* 
Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
*/

int main(int argc, char *argv[]) {
	float units, total_bill;

    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    // Calculate bill according to tiered rates
    if (units <= 50.0f) {
        total_bill = units * 0.50f;
    } else if (units <= 150.0f) {
        total_bill = 25.0f + ((units - 50.0f) * 0.75f);
    } else if (units <= 250.0f) {
        total_bill = 100.0f + ((units - 150.0f) * 1.20f);
    } else {
        total_bill = 220.0f + ((units - 250.0f) * 1.50f);
    }

    printf("\nTotal Electricity Bill = Rs. %.2f\n", total_bill);
	return 0;
}
