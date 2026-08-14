Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main()
{
    int t,h,m,s;
    printf("enter time in second");
    scanf("%d",&t);
    h=t/3600;
    m=(t%3600)/60;
    s=t%60;
    printf("time in hours , minute ,second is:%2d:%2d:%2d",h,m,s);
    return 0;
}
