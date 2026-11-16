//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST,
    INVALID
};

int main() {
    char input[20];
    enum Role userRole;

    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0) {
        userRole = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        userRole = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        userRole = GUEST;
    } else {
        userRole = INVALID;
    }

    switch (userRole) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid Role!\n");
            break;
    }

    return 0;
}
