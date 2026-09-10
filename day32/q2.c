//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int findMostFrequentDigit(long long num) {
    if (num == 0) {
        return 0;
    }
    if (num < 0) {
        num = -num;
    }
    int maxDigit = 0;
    int maxCount = 0;
    for (int i = 0; i < 10; i++) {
        long long temp = num;
        int currentCount = 0;
        while (temp > 0) {
            if (temp % 10 == i) {
                currentCount++;
            }
            temp /= 10;
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxDigit = i;
        }
    }   
    return maxDigit;
}
int main() {
    long long num1 = 112233;
    long long num2 = 887799;
    printf("Input: %lld -> Output: %d\n", num1, findMostFrequentDigit(num1));
    printf("Input: %lld -> Output: %d\n", num2, findMostFrequentDigit(num2));
    return 0;
}
