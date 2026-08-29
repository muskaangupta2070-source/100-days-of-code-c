//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {
    int num,digit,count=0,product=1;
    printf("enter number ");
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
        if(digit%2!=0){
            product=product*digit;
            count=count+1;
        }
        num=num/10;
    }
    if(count>0){
        printf("product of the odd digit is %d",product);
    }
    else{
        printf("no odd digit found");

    }
    return 0;
    }
