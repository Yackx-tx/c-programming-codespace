#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100];
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are:\n");
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                count++;
                break;
            }
        }
        if(count == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
