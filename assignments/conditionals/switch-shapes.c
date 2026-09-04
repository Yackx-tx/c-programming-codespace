#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float radius, height, width, side, base1, base2, area, PI = 3.14;
	char choice;
	printf("Choose a letter representing a shape(t, z, c, s, r): ");
	scanf("%c", &choice);
	switch(choice){
		case 'z':
			printf("\nEnter base1:\n");
			scanf("%f", &base1);
			printf("\nEnter base2:\n");
			scanf("%f", &base2);
			printf("\nEnter the height:\n");
			scanf("%f", &height);
			area = ((base1 + base2) * height)/2;
			printf("The area of trapezoid is %.2f\n", area);
			break;
		case 't':
			printf("\nEnter width:\n");
			scanf("%f", &width);
			printf("\nEnter height:\n");
			scanf("%f", &height);
			area = (width * height)/2;
			printf("The area of triangle is %.2f\n", area);
			break;
		case 'c':
			printf("\nEnter radius:\n");
			scanf("%f", &radius);
			area = PI * radius * radius;
			printf("The area of trapezoid is %.2f\n", area);
			break;	
		case 's':
			printf("\nEnter side:\n");
			scanf("%f", &side);
			area = 4 * side;
			printf("The area of square is %.2f\n", area);
			break;
		case 'r':
			printf("\nEnter width:\n");
			scanf("%f", &width);
			printf("\nEnter height:\n");
			scanf("%f", &height);
			area = height * width;
			printf("The area of rectangle is %.2f\n", area);
			break;			
		default:
			printf("The choice is invalid");		
	}
	return 0;
}
