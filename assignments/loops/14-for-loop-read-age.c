#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, age;
    int babies = 0, school = 0, adults = 0;

    printf("Enter the age of 15 people:\n");

    for (i = 1; i <= 15; i++) {
        printf("Person %d age: ", i);
        scanf("%d", &age);

        if (age <= 5) {
            babies++;
        }
        else if(age <= 17) {
            school++;
        }
        else {
            adults++;
        }
    }

    printf("Babies (0-5): %d\n", babies);
    printf("School Students (6-17): %d\n", school);
    printf("Adults (18+): %d\n", adults);

	return 0;
}
