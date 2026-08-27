//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main() {
    int a,b,i,j,rem;
    printf("enter value of first number ");
    scanf("%d",&a);
    printf("enter value of second number ");
    scanf("%d",&b);
    i=a;
    j=b;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    printf("the hcf %d and %d is : %d \n",i,j,a);
    return 0;
}
