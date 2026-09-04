#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	for(num = 1; num <= 100; num++){
		if(num%2 == 0){
			printf("%d\n", num);
		}
	}
	return 0;
}
