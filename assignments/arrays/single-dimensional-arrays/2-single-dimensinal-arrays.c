#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, sum = 0;
	printf("Enter the array size: \n");
	scanf("%d", &n);
	
	int ArrElement[n];
	printf("Enter the elements:\n");
	for(i = 0; i < n; i++){
		scanf("%d", &ArrElement[i]);
	}
	printf("The sum of the elements\n");
	for (i = 0; i < n; i++){
		sum += ArrElement[i];
	}
	printf("the sum is: %d", sum);
	return 0;
	
}
