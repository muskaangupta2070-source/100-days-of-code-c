//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int arr[] = {10, 50, 30, 70, 80, 60, 20, 90, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 70;
    int result = linearSearch(arr, size, target);
    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}
