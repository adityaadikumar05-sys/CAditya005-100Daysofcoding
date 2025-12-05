//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

// 1. Define the structure
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n, i;
    int max_index = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[max_index].marks) {
            max_index = i;
        }
    }

    printf("\n--------------------------------\n");
    printf("Topper: %s (Marks: %d)\n", s[max_index].name, s[max_index].marks);
    printf("--------------------------------\n");

    return 0;
}
