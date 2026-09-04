#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[100];
    int n, i, val, pos;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    // Find position to insert
    pos = n;
    for(i = 0; i < n; i++) {
        if(val < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}
