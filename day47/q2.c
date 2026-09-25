//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
int main() {
    char sentence[] = "Developing software in the C programming language is rewarding.";
    int maxLen = 0;
    int maxStartIdx = 0;
    int currentLen = 0;
    int currentStartIdx = 0;
    int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n' || 
            sentence[i] == '.' || sentence[i] == ','  || sentence[i] == '!'  || sentence[i] == '?') {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStartIdx = currentStartIdx;
            }
            currentLen = 0;
            currentStartIdx = i + 1;
        } else {
            currentLen++;
        }
        i++;
    }
    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxStartIdx = currentStartIdx;
    }
    printf("Sentence: %s\n", sentence);
    printf("The longest word is: ");
    for (int j = 0; j < maxLen; j++) {
        putchar(sentence[maxStartIdx + j]);
    }
    printf("\nLength: %d characters\n", maxLen);
    return 0;
}
