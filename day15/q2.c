//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("enter value of n : ");
    scanf("%d",&n);
    while (n>1)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    printf("reverse no. is %d",rev);
    return 0;
}
