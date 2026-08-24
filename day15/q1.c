//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
int main()
{
    int n,f=1;
    printf("enter value of n : ");
    scanf("%d",&n);
    while (n>1)
    {
        f=f*n;
        n--;
    }
    printf("factorial is %d",f);
    return 0;
}
