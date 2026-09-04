#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j = 0;
	for (i = 1; i < 5; i++){
		for (j = 1; j <= i; j++ ){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
