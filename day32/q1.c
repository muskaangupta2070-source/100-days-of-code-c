//Q63:  Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6, 8};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int len3 = len1 + len2; 
    int merged[len3];
    int i, j;
    for (i = 0; i < len1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < len2; j++) {
        merged[len1 + j] = arr2[j];
    }
    printf("Merged array: ");
    for (i = 0; i < len3; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
