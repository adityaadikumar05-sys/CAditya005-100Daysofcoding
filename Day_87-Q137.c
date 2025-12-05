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

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[100];
    scanf("%s", input);

    enum UserRole role;
    int isValid = 1;

    if (strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        role = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        role = GUEST;
    } else {
        printf("Invalid role\n");
        isValid = 0;
    }

    if (isValid) {
        switch (role) {
            case ADMIN:
                printf("Welcome Admin!\n");
                break;
            case USER:
                printf("Welcome User!\n");
                break;
            case GUEST:
                printf("Welcome Guest!\n");
                break;
        }
    }

    return 0;
}
