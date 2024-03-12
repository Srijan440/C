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
for (int j =0; j <n; j++)
{
    printf("%d\n",arr[j]);
}  
}