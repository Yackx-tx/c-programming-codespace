#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float basic, hra, da, gross_salary;
	printf("\nEnter the Basic salary: ");
	scanf("%f", &basic);
	
	if(basic <= 10000.0f){
		hra = basic * 0.20f;
		da = basic * 0.80f;
	} else if(basic <= 20000.0f){
		hra = basic * 0.25f;
		da = basic * 0.90f;
	} else if(basic > 20000.0f){
		hra = basic * 0.30f;
		da = basic * 0.95f;
	} else{
		printf("Invalid input");
	}
	gross_salary = basic + hra + da;
	printf("\nThe Gross Salary is: %.2f", gross_salary);
	return 0;
}
