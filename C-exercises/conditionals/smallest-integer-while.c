#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, count = 10, i = 0;
	int smallest;
	printf("\nEnter an integer: ");
		scanf("%d", &smallest);
	while(i < count){
		
		printf("\Enter an integer: ", i + 1);
		scanf("%d", &num);
		if(num < smallest){
			smallest = num;
		}
		i++;
	}
	printf("\nThe smallest number is %d", smallest);
	return 0;
}
