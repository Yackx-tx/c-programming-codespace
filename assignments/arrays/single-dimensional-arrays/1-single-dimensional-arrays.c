#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	printf("Enter the size of the array: \n");
	scanf("%d", &n);
	int Element[n];

	printf("Enter number of elements: \n");
	for (i = 0; i < n; i++){
		scanf("%d", &Element[i]);
	}
	
	printf("Display reversed elements.\n");
	
	for (i = n - 1; i >= 0; i--){
		printf("The reverse [%d] : %d\n", i, Element[i]);
	}
	return 0;
}
