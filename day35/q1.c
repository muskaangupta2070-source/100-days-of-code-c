//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
void findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Invalid Input: Array must contain at least two elements.\n");
        return;
    }
    int largest, second_largest;
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }
    for (int i = 2; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
        else if (largest == second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    if (largest == second_largest) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", second_largest);
    }
}
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    findSecondLargest(arr, size);
    return 0;
}
