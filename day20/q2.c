//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main() {
    unsigned int number;
    unsigned int ones_complement;
    printf("Enter an integer: ");
    scanf("%u", &number);
    ones_complement = ~number;
    printf("Original Number:   %u\n", number);
    printf("1's Complement:    %u\n", ones_complement);

    return 0;
}
