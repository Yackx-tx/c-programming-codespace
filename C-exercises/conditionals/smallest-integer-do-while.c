#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, count = 9, smallest, i = 0; 
	
	printf("\nEnter an integer: ");
	scanf("%d", &smallest);
		
	do{
		printf("\Enter an integer: ");
		scanf("%d", &num);
		if(num < smallest){
			smallest = num;
		}
		i++;
	}
	while(i < count);
	printf("The smallest number is %d", smallest);
	return 0;
}
