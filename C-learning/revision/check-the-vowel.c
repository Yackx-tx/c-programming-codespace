#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char alphabet;

    printf("Enter the alphabet: ");
    scanf("%c", &alphabet); 
    switch(alphabet){
    	case 'a':
		case 'i': 
		case 'o': 
		case 'u': 
		case 'e': 
    		printf("%c is a vowel", alphabet);
			break;
			
		default:
			printf("It is a consonant");
		
	}
    return 0;
}
