Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,g;
    printf("enter any three number");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
    { 
        printf("eqn has same root");
        e=-b/2*a;
        printf("roots are %f",e);
    }
    else if (d>0)
    {
        printf("eqn has real roots");
        f=(-b-sqrt(d))/(2*a);
        g=(-b+sqrt(d))/(2*a);
    
    printf("1st root is %f ",f);
    printf("2nd root is %f ",g);
    }
    else
   { 
    printf(" roots are imaginary ");
    printf(" no real roots exist");
   }
    return 0;
}

