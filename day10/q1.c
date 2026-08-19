Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 1st side");
    scanf("%d",&a);
    printf("enter 2nd side");
    scanf("%d",&b);
    printf("enter 3rd side ");
    scanf("%d",&c);
    if(a==b&&b==c)
    printf("equilateral");
    else if(a==b||b==c||a==c)
    printf("isosceles");
    else
    printf("scalene");
    return 0;
}
