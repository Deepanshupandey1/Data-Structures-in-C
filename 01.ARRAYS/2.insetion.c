#include <stdio.h>

int main() {
    int a[50], size, pos, i, num;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter data to insert in the array: ");
    scanf("%d", &num);

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size + 1) {
        printf("Invalid position!\n");
        return 0;
    } else {
        for (i = size; i >= pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos - 1] = num;
        size++;

        printf("The elements of the array after insertion are:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
