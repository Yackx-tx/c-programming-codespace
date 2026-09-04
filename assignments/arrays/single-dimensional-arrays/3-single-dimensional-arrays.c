#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    
    int arr1[n];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    int arr2[n];
    
    // Copying arr1 elements
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Copied array elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
