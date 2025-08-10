#include <stdio.h>

int main() {
    int arr[100]; // Increased size for safety
    int n, num, pos;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Input the number to be inserted
    printf("\nEnter the number to be inserted: ");
    scanf("%d", &num);

    // Input the position where number is to be inserted
    printf("Enter the position (0-based index) to insert the number: ");
    scanf("%d", &pos);

    // Check if position is valid
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number
    arr[pos] = num;
    n++; // Increase array size

    // Print updated array
    printf("\nThe array after insertion is:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
