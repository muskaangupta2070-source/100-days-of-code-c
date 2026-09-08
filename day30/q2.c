//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main() {
    int arr[] = {12, -5, 0, 8, -1, 0, 7, -3, 0, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } 
        else if (arr[i] < 0) {
            negative_count++;
        } 
        else {
            zero_count++;
        }
    }
    printf("Array Analysis:\n");
    printf("Positive elements: %d\n", positive_count);
    printf("Negative elements: %d\n", negative_count);
    printf("Zero elements:     %d\n", zero_count);

    return 0;
}
