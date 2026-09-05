/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
Sample Test Cases:
Input 1:
Output 1:
Pattern with layers of stars as shown.
*/
#include<stdio.h> 
int main() { 
    int i, j,sp=3,k; 
    for(i = 1; i <= 7; i+=2) 
     { 
        for(k=1;k<=sp;k++)
        printf("  ");
        for(j =1; j <=i; j++) { 
            printf("* "); 
        } 
        printf("\n");
        sp--; 
    } 
    sp=1;
    for(i = 5; i >= 1; i-=2)
    {
        for(k=1;k<=sp;k++)
        printf("  ");
        for(j =1; j <=i; j++) { 
            printf("* "); 
        } 
        printf("\n"); 
        sp++;

            
    } 

    return 0; 
}
