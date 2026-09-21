//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>
int main() {
    char a[30];
    printf("enter any string");
    gets(a);
    strrev(a);
    printf("\n reverse is %s",a);
    return 0;
}

    
