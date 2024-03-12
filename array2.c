// create an array and put elements on it and check how much elements are prime ?


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;int count1 = 0;
    int *arr = (int *)malloc(5*sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        num = arr[i];
        int count = 0;
        for (int j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            count1++ ;
        }
    }
    printf("%d",count1);
    return 0;
}