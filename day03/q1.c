Q5:Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main()
{
    int t;
    float f;
    printf("enter temperature in celcius");
    scanf("%d",&t);
    f=(t*9/5)+32;
    printf("temperature in farenheit is :%f",f);
    return 0;
}  
