//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main() {
    int num,rem,sum=0;
    printf("enter number ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }
    printf("\n sum of digits of number is %d",sum);
    return 0;
}
