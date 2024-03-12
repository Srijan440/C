#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
int n;
printf("Enter the value of n");
scanf("%d",&n);    
int *arr = (int *)malloc(n*sizeof(int));

  for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }
int product=arr[0];
  for (i = 1; i < n; i++)
    {
        product=arr[i]*product;
    }
    printf("%d",product);
}

