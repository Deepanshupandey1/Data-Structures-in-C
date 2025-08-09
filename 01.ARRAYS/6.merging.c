#include <stdio.h>

int main() {
    int arr1[50], arr2[50], arr3[100];
    int n1, n2, i, j;

    // Size and elements of first array
    printf("Enter size of arr1: ");
    scanf("%d", &n1);
    printf("Enter elements of arr1: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Size and elements of second array
    printf("Enter size of arr2: ");
    scanf("%d", &n2);
    printf("Enter elements of arr2: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy arr1 into arr3
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy arr2 into arr3 after arr1
    for(j = 0; j < n2; j++) {
        arr3[i] = arr2[j];
        i++;
    }

    // Print merged array
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
