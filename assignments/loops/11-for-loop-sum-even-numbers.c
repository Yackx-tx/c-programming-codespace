#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, sum =0;
	for (i = 0; i <= 100; i++){
		if(i%2 == 0){
			sum += i;
		}
	}
	printf("The sum of all even numbers is : %d", sum);
	return 0;
}
