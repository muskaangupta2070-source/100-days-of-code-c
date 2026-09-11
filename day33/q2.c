//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
void insertSorted(int arr[], int *n, int capacity, int key) {
    if (*n >= capacity) {
        printf("Error: Array is full. Cannot insert element.\n");
        return;
    }
    int i = *n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    *n = *n + 1;
}
int main() {
    int arr[10] = {12, 16, 20, 40, 50, 70}; 
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int key = 26; 
    printf("Before insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    insertSorted(arr, &n, capacity, key);
    printf("After insertion:  ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
