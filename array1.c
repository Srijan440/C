//Create an array and find out the  

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, c, d;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n % 2 != 0)
    {
        c = n / 2;
        printf("The middle term is:%d", arr[c]);
        printf("\n");
        int count = 0;
        for (int j = 1; j <= arr[c]; j++)
        {
            if (arr[c] % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d is a prime number",arr[c]);
        else
            printf("%d is not a prime number",arr[c]);
    }
    else
    {
        d = n / 2;
        printf("The middle terms=%d and %d", arr[d - 1], arr[d]);
        printf("\n");
        int count1 = 0, count2 = 0;
        for (int k = 1; k <= arr[d - 1]; k++)
        {
            if (arr[d - 1] % k == 0)
                count1++;
        }
        if (count1 == 2)
            printf("This first term %d is prime.\n",arr[d-1]);
        else
            printf("This first term %d is not a prime number.\n",arr[d-1]);
        for (int l = 1; l <= arr[d]; l++)
        {
            if (arr[d] % l == 0)
            count2++;
        }
        if (count2 == 2)
            printf("This second term %d is prime.\n",arr[d]);
        else
            printf("This second term %d is not a prime number.",arr[d]);
    }
}
