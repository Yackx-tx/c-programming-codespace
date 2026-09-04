#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n;
	int dividers = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		if(n%i == 0){
			dividers++;	
		}
	}
	if(dividers == 2){
		printf("The number %d is prime", n);
	} else{
		printf("Not a prime number");
	}
	return 0;
}
