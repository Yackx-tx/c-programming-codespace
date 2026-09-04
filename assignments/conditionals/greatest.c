#include <stdio.h>
#include <stdlib.h>

//1.Write a C program to find the greatest number among three numbers

int main(int argc, char *argv[]) {
	int num1, num2, num3;
	printf("Enter first number: \n");
	scanf("%d", &num1);
	printf("Enter second number: \n");
	scanf("%d", &num2);
	printf("Enter third number: \n");
	scanf("%d", &num3);
	
	if(num1 > num2 && num1 > num3){
		printf("The greatest number is: %d", num1);
	} else if(num2 > num1 && num2 > num3){
		printf("The greatest number is: %d", num2);
	} else if(num3 > num1 && num3 > num2){
		printf("The greatest number is: %d", num3);
	} else {
		printf("The numbers you gave are invalid or equal");
	}
	return 0;
}

