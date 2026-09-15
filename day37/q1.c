//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, sum;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nSum of each row:\n");
    for(i = 0; i < r; i++)
    {
        sum = 0;
        for(j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
    printf("\nSum of each column:\n");
    for(j = 0; j < c; j++)
    {
        sum = 0;
        for(i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
    return 0;
}
