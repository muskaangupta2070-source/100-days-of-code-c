#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    // Reads the entire line including spaces
    scanf("%[^\n]", str); 

    // Loop through the string character by character
    while (str[i] != '\0') {
        // If the current character is a space, change it to a hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++; // Move to the next character
    }

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
