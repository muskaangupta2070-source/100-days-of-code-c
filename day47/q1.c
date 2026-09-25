//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
int checkAnagram(const char *s1, const char *s2) {
    int count[256] = {0};
    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0') {
        count[(unsigned char)s1[len1]]++;
        len1++;
    }
    while (s2[len2] != '\0') {
        count[(unsigned char)s2[len2]]--;
        len2++;
    }
    if (len1 != len2) {
        return 0; 
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    if (checkAnagram(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are NOT anagrams.\n", str1, str2);
    }
    return 0;
}
