#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i, even = 0, odd = 0;
	int arr[100], evenArr[100], oddArr[100];
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	printf("Enter %d elements:\n", n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n; i++){
		if(arr[i] % 2 == 0){
			evenArr[even] = arr[i];3
			
			even++;
		} else {
			oddArr[odd] = arr[i];
			odd++;
		}
	}
	printf("\nEven elements:\n");
	for(i = 0; i < even; i++){
		printf("%d ", evenArr[i]);
	}
	printf("\nOdd elements:\n");
	for(i = 0; i < odd; i++){
		printf("%d ", oddArr[i]);
	}
	
	printf("\n");
	return 0;
}
