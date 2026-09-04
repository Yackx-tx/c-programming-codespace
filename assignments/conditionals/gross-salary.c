#include <stdio.h>
#include <stdlib.h>

/*
7.Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

int main(int argc, char *argv[]) {
	float basic, hra, da, gross;
	printf("Enter employee's basic salary: \n");
	scanf("%f", &basic);
	if(basic <= 10000.0f){
		hra = basic * 0.20f;
		da = basic * 0.80f;
	} else if(basic <=  20000.0f){
		hra = basic * 0.25f;
		da = basic * 0.90f;
	} else if(basic > 20000.0f){
		hra = basic * 0.30f;
		da = basic * 0.95f;
	} else {
		printf("Please enter valid basic salary");
	}
	
	gross = basic + hra + da;
	printf("\n--- Salary Review ---\n");
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("------------------------\n");
    printf("Gross Salary : %.2f\n", gross);
	
	return 0;
}
