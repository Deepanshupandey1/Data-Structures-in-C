#include <stdio.h>

int main() {
    int arr[100], n, num, i, pos;

    // Input number of elements
    printf("Enter the number of elements (sorted in ascending order): ");
    scanf("%d", &n);

    // Input sorted elements
    printf("Enter the sorted elements:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Input number to be inserted
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

    // Find correct position to insert (first element > num)
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > num) {
            break;
        }
    }

    // Shift elements to right to make space for new number
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the number
    arr[pos] = num;
    n++;

    // Output the new sorted array
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
