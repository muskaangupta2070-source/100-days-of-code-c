//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[] = "Hello World from C";
    printf("Original: %s\n", sentence);
    char* word_begin = sentence;
    char* temp = sentence;
    while (*temp) {
        if (*(temp + 1) == ' ' || *(temp + 1) == '\0') {
            char* start = word_begin;
            char* end = temp;
            while (start < end) {
                char swap_temp = *start;
                *start = *end;
                *end = swap_temp;
                start++;
                end--;
            }
            word_begin = temp + 2; 
        }
        temp++;
    }
    printf("Reversed: %s\n", sentence);
    return 0;
}
