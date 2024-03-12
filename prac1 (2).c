// C program to input and print n elements in an array

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int i;
    printf("Enter the n value:\n");
    scanf("%d", &n);
    int *arr = (int*)malloc(n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
     for (i = 0; i < n; i++)
  {

    printf("%d",arr[i]);
  }
}