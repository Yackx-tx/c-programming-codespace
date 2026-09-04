#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, sum = 0, count = 10, i = 0;
	do{
		printf("\nEnter number: ");
		scanf("%d", &num);
		sum += num;
		i++;
	} 
	while(i < 10);
	printf("The sum is %d", sum);
	return 0;
}
