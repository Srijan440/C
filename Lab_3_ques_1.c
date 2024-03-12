// Write a program to perform the following operations on a given square matrix using functions:
// i. Find the number of non-zero elements
// ii. Display upper triangular matrix
// iii. Display the elements of just above and below the main diagonal

// Sample Input:
// Enter size of the square matrix: 4
// Enter elements of the matrix:
// 8  2  1  0
// 1  0  7  6
// 0  6  2  4
// 3  9  5  03

// Sample Output:
// Non-zero elements : 12
// Upper triangular matrix:
// 2  1  0
// 7  6
// 4
#include <stdio.h>

void readMatrix(int size, int matrix[][size]);
int countNonZeroElements(int size, int matrix[][size]);
void printUpperTriangularMatrix(int size, int matrix[][size]);
void printElementsAboveAndBelowDiagonal(int size, int matrix[][size]);

void readMatrix(int size, int matrix[][size]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int countNonZeroElements(int size, int matrix[][size]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != 0) {
                count++;
            }
        }
    }
    return count;
}

void printUpperTriangularMatrix(int size, int matrix[][size]) {
    printf("Upper triangular matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j > i) { 
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

void printElementsAboveAndBelowDiagonal(int size, int matrix[][size]) {
    printf("Elements just above and below the main diagonal:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == i + 1 || j == i - 1) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];
    readMatrix(size, matrix);

    int nonZeroCount = countNonZeroElements(size, matrix);
    printf("Non-zero elements: %d\n", nonZeroCount);

    printUpperTriangularMatrix(size, matrix);

    printElementsAboveAndBelowDiagonal(size, matrix);

    return 0;
}