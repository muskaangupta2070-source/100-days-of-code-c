//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>
int main() {
    char a[30],b[30];
    printf("enter any string");
    gets(a);
    strcpy(b,a);
    strrev(a);
    if(strcmp(a,b)==0)
    printf("palendrom");
    else
    printf("not palledrom");
    return 0;
}
