//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void modifyStudent(struct Student *ptr) {
    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);
}

int main() {
    struct Student student;
    struct Student *s_ptr;
    s_ptr = &student;
    printf("--- Enter Data via Pointer ---\n");
    modifyStudent(s_ptr);
    printf("\nOutput:\n");
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           s_ptr->name, s_ptr->roll, s_ptr->marks);

    return 0;
}