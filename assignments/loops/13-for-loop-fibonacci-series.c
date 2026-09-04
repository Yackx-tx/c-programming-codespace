#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b = 1, number, next;
	printf("Enter the limit number: ");
	scanf("%d", &number);
	
	for(a = 0; a <= number; ){
		printf("%d\n", a);
		next = a + b;
		a = b;
		b = next;
	}   
	printf("\n");
	return 0;
}
