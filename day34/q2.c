//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
void delete_by_index(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index! Deletion not possible.\n");
        return;
    }
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int main() {
    int arr[10] = {10, 20, 30, 40, 50}; 
    int size = 5;                        
    int index_to_delete = 2;        
    printf("Original array: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    delete_by_index(arr, &size, index_to_delete);
    printf("\nAfter deletion:  ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    return 0;
}
