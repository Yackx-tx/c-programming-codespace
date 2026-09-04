#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	printf("Enter the size of the array: \n");
	scanf("%d", &n);
	int Arr[n];
	printf("Enter the array element\n");
	for(i = 0; i < n; i++){
		scanf("%d", &Arr[i]);
	}
	printf("Display the array elements:\n");
	for(i = 0; i < n; i++){
		printf("The element [%d] = %d\n", i, Arr[i]);
	}
	return 0;
}
