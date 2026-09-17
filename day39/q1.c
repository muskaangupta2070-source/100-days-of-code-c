//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#define MAX 100
int areDiagonalElementsDistinct(int matrix[MAX][MAX], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return 0; 
            }
        }
    }
    return 1; 
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
    if (areDiagonalElementsDistinct(matrix, size)) {
        printf("\nResult: The elements on the main diagonal are distinct.\n");
    } else {
        printf("\nResult: The elements on the main diagonal are NOT distinct.\n");
    }
    return 0;
}
