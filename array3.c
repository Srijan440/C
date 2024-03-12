//create an array print it and now reverse it

#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
int n;
printf("Enter the value of n=");
scanf("%d",&n);    
int *arr = (int *)malloc(n*sizeof(int));
printf("Enter the elements of array:\n");

  for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
printf("The reverse of this array:\n");    
for (int j =n-1; j >=0; j--)
{
    printf("%d\n",arr[j]);
}  
}