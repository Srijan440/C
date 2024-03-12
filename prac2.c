// C program to copy all elements of one array to another

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    printf("Enter the n value:\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    int arr2[n];

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
//    for (i = 0; i <= n; i++)
//     {
//         arr[i] = arr2[i];
//         scanf("%d",arr[2]);
//     }
//     for (i = 0; i <= n; i++)
//     {
//         printf("%d\n", arr2[i]);
//     }
// }
    //  for (i = 0; i < n; i++)
    //  {
    //     arr2[i]=arr[i];
    //  }

    //  printf("\n");
    //  printf("Reverse of this array:");
    //   for (i = n-1; i >= 0; i--)
    //   {
    //     printf("%d\t",arr2[i]);
    //   }
     printf("\n\n");
      int add=0;
      for (i = 0; i < n; i++)
      {
        add=add+arr[i];
      }
    printf("Their add value is :%d",add);
    printf("\n");
    int product=1;

      for (i = 0; i < n; i++)
      {
        product=product*arr[i];
      }
      printf("Their product value is :%d",product);
      printf("\n");
    if (add>product)
    printf("ADD value is greater than product value\n");
    if (product>add)
    printf("Product value is greater than add value\n");
    if (product=add)
    printf("Product value and add value both are equal\n");
    
}

