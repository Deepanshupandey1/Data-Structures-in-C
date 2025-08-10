#include <stdio.h>

int main() {
    int a[100], n, p, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &p);

    for (i = p; i < n - 1; i++) a[i] = a[i + 1];

    printf("Array after deletion:\n");
    for (i = 0; i < n - 1; i++) printf("%d ", a[i]);

    return 0;
}
