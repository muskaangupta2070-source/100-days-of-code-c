Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main()
{
    int c,s,p,l;
    printf("enter cost price");
    scanf("%d",&c);
    printf("enter selling price");
    scanf("%d",&s);
    if(s>c)
    {
        p=((s-c)/c)*100;
        printf("profit of %d",p);
    }
    else if (c>s)
    {
        l=((c-s)/c)*100;
        printf("loss is %d",l);

    }
    else{
    printf("no profit no loss");}
    return 0;
}
