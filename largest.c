#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,size;
    printf("Enter Size of Array:");
    scanf("%d",&size);
    
    int *arr = (int *)malloc(size*sizeof(int));
    
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int smallest=arr[0];
    for ( i = 0; i < size; i++)                                  
    {
        if (smallest > arr[i])
        {
            smallest =arr[i];
        }
    }
    printf("%d",smallest);


    
    return 0;
}