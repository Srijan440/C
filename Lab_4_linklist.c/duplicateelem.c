#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, elem;
    printf("enter the size and element\n");
    scanf("%d %d", &n, &elem);
    int *arr = (int *)malloc(n * sizeof(int));
    int copy = n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int index;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == elem)
        {
            index = i;
            break;
        }
    }
    for (int i = index + 1; i < n; i++)
    {
        if (elem == arr[i])
        {
            for (int k = i; k < n; k++)
            {
                arr[k] = arr[k + 1];
            }
            n--;
        }
    }
    if (copy == n)
    {
        printf("No duplicate present");
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}