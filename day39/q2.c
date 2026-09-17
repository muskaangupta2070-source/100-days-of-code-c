//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
#define MAX 100
int mainDiagonalSum(int matrix[MAX][MAX], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    
    return sum;
}
int main() {
    int size;
    int matrix[MAX][MAX];
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int totalSum = mainDiagonalSum(matrix, size);
    printf("\nSum of the main diagonal elements: %d\n", totalSum);
    return 0;
}
