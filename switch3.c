#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("[ Menu ]\n\n");
    printf("1. Largest.\n");
    printf("2. Smallest.\n\n");

    int choice;
    printf("Enter choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter Size of Array:");
        int size;
        scanf("%d", &size);

        int *arr = (int *)malloc(size * sizeof(int));
        int i;
        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        int largest = arr[0];
        for (i = 0; i < size; i++)
        {
            if (largest < arr[i])
            {
                largest = arr[i];
            }
        }
        printf("%d", largest);
        break;

    case 2:
        printf("Enter Size of Array:");
        int size1;
        scanf("%d", &size1);

        int *arr1 = (int *)malloc(size1 * sizeof(int));
        int j;
        for (j = 0; j < size1; j++)
        {
            scanf("%d", &arr1[j]);
        }
        int smallest = arr1[0];
        for (j = 0; j < size1; j++)
        {
            if (smallest > arr1[j])
            {
                smallest = arr1[j];
            }
        }
        printf("%d", smallest);
        break;

    default:
        printf("Invalid input");
    }
}
