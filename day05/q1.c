Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int p,n;
    float r,si,ci;
    printf("enter principal value");
    scanf("%d",&p);
    printf("enter rate");
    scanf("%f",&r);
    printf("enter time");
    scanf("%d",&n);
    si=(p*n*r)/100;
    printf("simple interest is equal to %f",si);
    ci=(p*(pow(1+r/100,n)))-p;
    printf("compund interest is equal to %f",ci);
    return 0;

}
