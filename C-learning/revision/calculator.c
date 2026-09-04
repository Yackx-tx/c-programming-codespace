#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char choice;
	int num1, num2, sum, diff, prod, modulus;
	float fnum1, fnum2, div;
	printf("Select the operation (+, -, *, /, %):");
	scanf("%c", &choice);
	switch(choice){
		case '+':
			printf("\nEnter 2 numbers: \n");
			scanf("%d %d", &num1, &num2);
			sum = num1 + num2;
			printf("The sum is %d\n", sum);
			break;
		case '-':
			printf("\nEnter 2 numbers: \n");
			scanf("%d %d", &num1, &num2);
			diff = num1 - num2;
			printf("The difference is %d\n", diff);
			break;
		case '*':
			printf("\nEnter 2 numbers: \n");
			scanf("%d %d", &num1, &num2);
			prod = num1 * num2;
			printf("The product is %d\n", prod);
			break;
		case '/':
			printf("\nEnter 2 numbers: \n");
			scanf("%f %f", &fnum1, &fnum2);
			div = fnum1 / fnum2;
			printf("The quotient is %.2f\n", div);
			break;
		case '%':
			printf("\nEnter 2 numbers: \n");
			scanf("%d %d", &num1, &num2);
			modulus = num1 % num2;
			printf("The remainder is %d\n", modulus);
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}
