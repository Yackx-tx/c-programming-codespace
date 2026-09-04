#include <stdio.h>
#include <stdlib.h>


//2.Write a C program to find out whether a given year is a leap year or not

int main() {
	int year;
	printf("Enter a certain year: \n");
	scanf("%d", &year);
	
	if(year % 4 == 0 ) {
		printf("The year you entered is a leap year");
	}else {
		printf("The year is not leap year");
	}
	return 0;
}



