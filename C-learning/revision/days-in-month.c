#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int month;
	printf("Enter a month to get days: \n");
	scanf("%d", &month);
	
	switch(month){
		case 1:
			printf("The month is January \n");
			printf("It has 31 days");
			break;
		case 2:
			printf("The month is February \n");
			printf("It has 28 or 29 days");
			break;
		case 3:
			printf("The month is March \n");
			printf("It has 31 days");
			break;
		case 4:
			printf("The month is April \n");
			printf("It has 30 days");
			break;
		case 5:
			printf("The month is May \n");
			printf("It has 31 days");
			break;
		case 6:
			printf("The month is June \n");
			printf("It has 30 days");
			break;
		case 7:
			printf("The month is July \n");
			printf("It has 31 days");
			break;
		case 8:
			printf("The month is August \n");
			printf("It has 31 days");
			break;	
		case 9:
			printf("The month is September \n");
			printf("It has 30 days");
			break;
		case 10:
			printf("The month is October; \n");
			printf("It has 31 days");
			break;
		case 11:
			printf("The month is November \n");
			printf("It has 30 days");
			break;
		case 12:
			printf("The month is December \n");
			printf("It has 31 days");
			break;		
		default:
		printf("---Please enter a valid month :( ----");									
	}
	return 0;
}
