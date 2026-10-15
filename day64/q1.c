//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3
Input 2:
s = "bbbbb"
Output 2:
1
Input 3:
s = "pwwkew"
Output 3:
3
*/
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int max_len = 0;
    int left = 0;
    int last_seen[256];
    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }
    for (int right = 0; right < n; right++) {
        unsigned char current_char = s[right];
        if (last_seen[current_char] >= left) {
            left = last_seen[current_char] + 1;
        }
        last_seen[current_char] = right;
        int current_len = right - left + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    return max_len;
}
int main() {
    char s1[] = "abcabcbb";
    char s2[] = "bbbbb";
    char s3[] = "pwwkew";
    printf("Input 1: s = \"%s\" -> Output: %d\n", s1, lengthOfLongestSubstring(s1));
    printf("Input 2: s = \"%s\" -> Output: %d\n", s2, lengthOfLongestSubstring(s2));
    printf("Input 3: s = \"%s\" -> Output: %d\n", s3, lengthOfLongestSubstring(s3));
    return 0;
}
