//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "waterbottle";
    char s2[] = "erbottlewat";
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int isRotation = 0; 
    if (len1 == len2) {
        char temp[100]; 
        strcpy(temp, s1);
        strcat(temp, s1);
        if (strstr(temp, s2) != NULL) {
            isRotation = 1; 
        }
    }
    if (isRotation == 1) {
        printf("Yes, it is a rotation.\n");
    } else {
        printf("No, it is not a rotation.\n");
    }
    return 0; 
}
