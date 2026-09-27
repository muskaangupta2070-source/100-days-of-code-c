//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
int main() {
    char name[100]; 
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Initials: ");
    if (name[0] >= 'a' && name[0] <= 'z') {
        printf("%c", name[0] - 32);
    } else if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }
    for (int i = 1; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            char initial = name[i];
            if (initial >= 'a' && initial <= 'z') {
                initial = initial - 32;
            }       
            printf(" %c", initial);
        }
    }
    printf("\n");
    return 0;
}
