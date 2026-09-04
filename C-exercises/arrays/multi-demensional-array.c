#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int row, col, i, j;
	printf("Enter the number of rows: \n");
	scanf("%d", &row);
		printf("Enter the number of columns: \n");
	scanf("%d", &col);
	
	int A[row][col];
	printf("Enter the array elements: \n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Diplay the Array element: \n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("The element [%d][%d] = %d\n",i, j, A[i][j]);
		}
	}
	
	return 0;
}
