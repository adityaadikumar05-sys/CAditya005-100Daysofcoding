//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum OPERATIONS {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char op[256];
    int a, b;
    enum OPERATIONS operation;
    scanf("%s %d %d", op, &a, &b);
    if (strcmp("ADD", op) == 0) {
        operation = ADD;
    } else if (strcmp("SUBTRACT", op) == 0) {
        operation = SUBTRACT;
    } else if (strcmp("MULTIPLY", op) == 0) {
        operation = MULTIPLY;
    }

    switch (operation) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid operation\n");
    }
    return 0;
}