#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n ;
	int i ;
	scanf("%d", &n);
	for (i = n; i >= 1; i--){
		printf("%d\n", i);
	}
	return 0;
}
