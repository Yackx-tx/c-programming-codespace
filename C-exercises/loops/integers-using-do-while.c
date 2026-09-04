#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num = 8;
//	using while loop

	do{
		printf("%d\t", num);
		num++;
	}
	while(num <= 23);

	return 0;
}
