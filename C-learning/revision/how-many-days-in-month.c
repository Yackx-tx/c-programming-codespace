#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int month;
	printf("enter month: \n");
	scanf("%d",&month);
	switch(month){
		case 1:
			printf("january");
			printf("it has 31 days");
			break;
			
		case 2:
			printf("february");
			printf("it has 28 days");
			break;
		case 3:
			printf("march");
			printf("it has 31 days");
			break;
		case 4:
			printf("april");
			printf("it has 30 days");
			break;
		case 5:
			printf("march");
			printf("it has 31 days");
			break;
		case 6:
			printf("june");
			printf("it has 31 days");
			break;	
		case 7:
			printf("july");
			printf("it has 30 days");
			break;
		
		case 8:
			printf("ougust");
			printf("it has 31 days");
			break;
		case 9:
			printf("september");
			printf("it has 30 days");
			break;
		case 10:
			printf("october");
			printf("it has 31 days");
			break;
		case 11:
			printf("november");
			printf("it has 30 days");
			break;
		case 12:
			printf("september");
			printf("it has 31 days");
			break;		
		default:
			printf("does not exist");	
			
	}
	return 0;
}
