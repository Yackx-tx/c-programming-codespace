#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fact = 1 , i, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		fact *= i;
	}
	printf("%d", fact);
	return 0;
}
