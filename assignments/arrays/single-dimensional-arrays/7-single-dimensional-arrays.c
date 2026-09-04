#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n, i, j, temp;
    int merged[200];
    
    printf("Enter size of each array: ");
    scanf("%d", &n);
    
    int arr1[n];
    
    printf("Enter %d elements for first array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    int arr2[n];
    printf("Enter %d elements for second array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for(i = 0; i < n; i++){
    	merged[i] = arr1[i];
	}
	for(i = 0; i < n; i++){
    	merged[i + n] = arr2[i];
	}
    int sizeOfArrays = 2 * n;
    
    for(i = 0; i < sizeOfArrays - 1; i++){
    	for(j = i + 1; j < sizeOfArrays; j++){
    		if(merged[i] < merged[j]){
    			temp = merged[i];
    			merged[i] = merged[j];
    			merged[j] = temp;
			}
		}
	}
	printf("Merged array in descending order:\n");
	for(i = 0; i < sizeOfArrays; i++){
		printf("%d\n", merged[i]);
	}
	
	printf("\n");
	return 0;
}
