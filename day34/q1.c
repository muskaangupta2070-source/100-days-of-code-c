//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int array[100]; 
    int size, i, position, value;
    printf("Enter number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the position where you want to insert (1 to %d): ", size + 1);
    scanf("%d", &position);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    if (position < 1 || position > size + 1) {
        printf("Invalid position! Insertion must be between 1 and %d.\n", size + 1);
    } else {
        for (i = size - 1; i >= position - 1; i--) {
            array[i + 1] = array[i];
        }
        array[position - 1] = value;
        size++;
        printf("Resultant array is:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    return 0;
}
