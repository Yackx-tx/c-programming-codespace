#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[100];
    int n, i, smallest, secondSmallest;

    printf("Enter number of elements (at least 2): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    secondSmallest = -1; 

    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] > smallest && (secondSmallest == -1 || arr[i] < secondSmallest)) {
            secondSmallest = arr[i];
        }
    }

    if(secondSmallest == -1) {
        printf("There is no distinct second smallest element.\n");
    } else {
        printf("Second smallest element: %d\n", secondSmallest);
    }
	return 0;
}
