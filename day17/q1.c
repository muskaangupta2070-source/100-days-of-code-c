//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main() {
    int num,rem,sum=0,n;
    printf("enter value of number ");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem*rem*rem;
    }
    printf("\n sum of cube is %d",sum);
    if(sum==n)
    printf("\n it is armstrong no.");
    else
    printf("\nit is not an armstrong no.");
    return 0;
}

