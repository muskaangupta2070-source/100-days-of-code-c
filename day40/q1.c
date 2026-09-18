//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
void diagonalTraversal(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int totalDiagonals = rows + cols - 1;
    printf("Diagonal Traversal: \n");
    for (int d = 0; d < totalDiagonals; d++) {
        int r = (d < cols) ? 0 : d - cols + 1;
        int c = (d < cols) ? d : cols - 1;
        while (r < rows && c >= 0) {
            printf("%d ", mat[r][c]);
            r++; 
            c--; 
        }
        printf("\n"); 
    }
}
int main() {
    int rows = 3, cols = 4;
    int mat[MAX_ROWS][MAX_COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    diagonalTraversal(mat, rows, cols);
    return 0;
}
