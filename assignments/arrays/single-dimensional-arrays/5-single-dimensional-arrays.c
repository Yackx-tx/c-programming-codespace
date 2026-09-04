#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, n, count = 0;
	int visited[100] = {0};
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the array elements: \n");
	for (i = 0; i < n; i++){
		printf("\nEnter the [%d] element: ", i+1);
		scanf("%d", &arr[i]);
	} 
	for (i = 0; i < n; i++){
		if(visited[i] == 1) continue;
		int isDuplicate = 0; 
		
		for(j = i+1; j < n; j++){
			if(arr[i] == arr[j]){
				isDuplicate = 1;
				visited[j] = 1;
			}
		}
		if(isDuplicate == 1){
			count++;
		}
	}
	printf("Total number of duplicate elements: %d\n", count);
//	printf("The elements are: \n");
//	for (i = 0; i < n; i++){
//		printf("\nThe [%d] element is : %d", i+1, arr[i]);
//	}
	return 0;
}
