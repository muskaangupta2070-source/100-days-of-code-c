//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>
int main() {
    int l = 0, i;
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    for (i = 0; name[i] != '\0'; i++) {
        l++;
    }
    printf("\n The length is: %d", l);    
    return 0;
}

