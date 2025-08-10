//array and pointer concept
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a; // p points to first element of a

    printf("Array ka address (a): %p\n", a);
    printf("Pointer ka address (p): %p\n", p);

    printf("\nValues using array name (a):\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("\nValues using pointer (p):\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    return 0;
}
