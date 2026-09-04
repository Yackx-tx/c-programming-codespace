#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float units, total_bill;
	printf("\nEnter the units: ");
	scanf("%f", &units);
	if(units <= 50.0f){
		total_bill = units * 0.50f;
	} else if(units <= 150.0f){
		total_bill = 25.0f + (units - 50) * 0.75f;
	} else if(units <= 250.0f){
		total_bill = 100.0f + (units - 150) * 1.20f;
	} else if(units > 250.0f){
		total_bill = 220.0f + (units - 250) * 1.50f;
	} else {
		printf("there is invalid units");
	}
	
	printf("\nThe electricity bill is: Rs. %.2f", total_bill);
	return 0;
}
