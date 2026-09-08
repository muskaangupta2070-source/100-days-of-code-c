//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main() {
    int size, i;
    int even_count = 0;
    int odd_count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size]; 
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
        } 
        else {
            odd_count++;
        }
    }
    printf("\nTotal Even numbers: %d\n", even_count);
    printf("Total Odd numbers: %d\n", odd_count);
    return 0;
}
