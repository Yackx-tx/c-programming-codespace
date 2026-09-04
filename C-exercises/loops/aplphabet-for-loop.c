#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	for(c = 'a'; c <= 'z'; c++){
		printf("%c\t", c);
	}
	return 0;
}
