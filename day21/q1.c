//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {
    int num, originalNum, firstDigit, lastDigit, multiplier = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    if (num < 0) {
        num = -num;
    }
    lastDigit = num % 10;
    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        multiplier *= 10;
    }
    firstDigit = temp;
    int middle = (num % multiplier) / 10;
    int swappedNum = (lastDigit * multiplier) + (middle * 10) + firstDigit;
    if (originalNum < 0) {
        swappedNum = -swappedNum;
    }

    printf("Swapped number: %d\n", swappedNum);

    return 0;
}
