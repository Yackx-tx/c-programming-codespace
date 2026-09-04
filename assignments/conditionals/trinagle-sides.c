#include <stdio.h>
#include <stdlib.h>

//--->5. Write a C program to input all sides of a triangle and check whether triangle is valid or not.<--
int main(int argc, char *argv[]) {
	int side1, side2, side3;
	printf("Enter three sides of triangle: \n");
	scanf("%d %d %d", &side1, &side2, &side3);
//	a + b > c AND a + c > b AND b + c > a, 
//logic for the sum of two sides must be greater that the third side and vice versa
	
	if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1){
		printf("the sides of triangle is valid");
	}
	else{
		printf("the sides of triangle is invalid");
	}
	return 0;
}
