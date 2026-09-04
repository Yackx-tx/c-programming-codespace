#include <stdio.h>
#include <stdlib.h>

//3.Write a Program to print a number of days in a month using if statement
int main(){
	int month;
	printf("Enter the month you want to check: \n");
	scanf("%d", &month);
	if (month <= 12 ){
		if(month % 2 != 0 || month == 8 || month == 12 || month == 10){
			printf("It has 31 days");
		} else if(month == 2){
			printf("It has 28 or 29 days");
		} else if(month % 2 == 0){
			printf("It has 30 days");
		}
	} else{
		printf("The month you entered is invalid");
	}
	return 0;
}
