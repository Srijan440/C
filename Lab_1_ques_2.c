//Write a program to create an array of n elements using dynamic memory allocation.



#include <stdio.h>
#include <stdlib.h>

int isNumberPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *numbers = (int *)malloc(size * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array: ");   
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    int primeSum = 0;
    for (int i = 0; i < size; i++) {
        if (isNumberPrime(numbers[i])) {
            primeSum += numbers[i];
        }
    }

    printf("Sum of prime numbers in the array: %d\n", primeSum);

    free(numbers);

    return 0;
}