//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
int main() {
    char date[] = "25/04/2026";
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int m = (date[3] - '0') * 10 + (date[4] - '0');
    printf("%.2s-%s-%s\n", date, months[m], &date[6]);
    return 0;
}
