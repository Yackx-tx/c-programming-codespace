#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[100];
    int n, i, largest, secondLargest;

    printf("Enter number of elements (at least 2): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    secondLargest = -1; // Assuming positive integers, or handle appropriately

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && (secondLargest == -1 || arr[i] > secondLargest)) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -1) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }
	return 0;
}
