#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char alphabet_uppecase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alphabet_lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	
	while(alphabet_uppecase[i] != '\0'){
        printf("%c ", alphabet_uppecase[i]);
        i++;
    }
    printf("\n");
    return 0;
    while(alphabet_lowercase[i] != '\0'){
    	printf("%c", alphabet_lowercase[i]);
    	i++;
	}
	printf("\n");
	return 0;
}
