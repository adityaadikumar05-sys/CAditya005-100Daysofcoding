//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>
#include <string.h> // Required for strcmp

struct Student {
    char name[100];
    int roll;
    int marks;
};
int areIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) != 0) {
        return 0;
    }\
    if (s1.roll != s2.roll) {
        return 0;
    }
    if (s1.marks != s2.marks) {
        return 0;
    }
    return 1;
}

int main() {
    struct Student s1, s2;

    printf("--- Student 1 ---\n");
    printf("Enter Name: ");
    scanf("%s", s1.name);
    printf("Enter Roll: ");
    scanf("%d", &s1.roll);
    printf("Enter Marks: ");
    scanf("%d", &s1.marks);

    printf("\n--- Student 2 ---\n");
    printf("Enter Name: ");
    scanf("%s", s2.name);
    printf("Enter Roll: ");
    scanf("%d", &s2.roll);
    printf("Enter Marks: ");
    scanf("%d", &s2.marks);

    if (areIdentical(s1, s2)) {
        printf("\nSame\n");
    } else {
        printf("\nDifferent\n");
    }

    return 0;
}
