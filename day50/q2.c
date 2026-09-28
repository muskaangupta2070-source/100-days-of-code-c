//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "abcd";
    int len = strlen(str);
    printf("All substrings of \"%s\":\n", str);
    for (int i = 0; i < len; i++) {
        for (int sub_len = 1; sub_len <= len - i; sub_len++) {
            printf("%.*s\n", sub_len, &str[i]);
        }
    }
    return 0;
}
