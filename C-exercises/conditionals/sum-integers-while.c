#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, sum, count;
	sum = 0;
	count = 10;
	int i = 0;
	while(i < count){
		printf("\nEnter number: ");
		scanf("%d", &num);
		sum += num;
		i++;
	}
	printf("The sum is %d", sum );
	return 0;
}
