//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count[26] = {0}; 
    char result = '\0';
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a'; 
            if (count[index] > 0) {
                result = str[i];
                break; 
            }
            count[index]++;
        }
    }
    if (result != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", result);
    } else {
        printf("No repeating lowercase alphabets found.\n");
    }
    return 0;
}
