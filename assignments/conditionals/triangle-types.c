#include <stdio.h>

//6.Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
/*
following these rules:
1. Equilateral: a=b=c
2. Isoscele: atleast two angles are equal
3. Scalene: all angles are distinct
*/

int main() {
	int a, b, c;
	printf("Enter the angles of the triangle: \n");
	scanf("%d %d %d", &a, &b, &c);
	if(a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)){
		if(a == b && b == c){
			printf("This triangle is equilateral");
		} else if( a == b || b == c || c == a ){
			printf("This trianlge is isoscele");
		} else{
			printf("This is a scalene triangle");
		}
	} else{
		printf("This is not a valid triangle.");
	}
	return 0;
	
}
