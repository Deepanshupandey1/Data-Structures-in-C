#include<stdio.h>
void main()
{
    int a[100],size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
}