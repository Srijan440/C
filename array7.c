
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    printf("Enter the n value:\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Enter the elements\n");
        scanf("%d", &arr[i]);
    }
    printf("Print values are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    int num;
    scanf("%d",&num);

int count =0;
    for (i = 0; i < n; i++)
    {
        if (arr[i]==num)
        count++;
    }
    if(count==0)
    {
        printf("not present");
    }
    else
    printf("%d",count);
}