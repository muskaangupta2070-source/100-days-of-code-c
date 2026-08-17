Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter an character");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("it is a capital letter");
    else if(ch>=97&&ch<=122)
    printf("it is a small letter");
    else if(ch>=48&&ch<=57)
    printf("it is a digit");
    else
    printf("it is a character");
    return 0;
}
