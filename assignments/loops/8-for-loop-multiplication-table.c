#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, n, mult;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			mult = i *j;
			printf("%d * %d = %d\n", i, j, mult);
		}
		printf("\n");
	}
	return 0;
}
