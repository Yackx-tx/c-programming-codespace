#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int arr[100];
    int n, i, val, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter position (0-based index): ");
    scanf("%d", &pos);

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
