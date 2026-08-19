Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include<stdio.h>
int main()
{
    int d;
    printf("enter day");
    scanf("%d",&d);

    switch(d)
    {
    case 1: printf("sunday");break;
    case 2: printf("monday");break;
    case 3: printf("tuesday");break;
    case 4: printf("wednesday");break;
    case 5: printf("thursday");break;
    case 6: printf("friday");break;
    case 7: printf("saturday");break;
    default : printf("invalid no.");
    }
    return 0;
}
