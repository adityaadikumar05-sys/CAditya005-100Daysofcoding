//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    fp = fopen("students.txt","w");
    if (fp == NULL) {
        printf("File Not Found\n");
        return -1;
    }
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Student #%d:\n", i + 1);
        printf("Student Name: ");
        scanf("%s", students[i].name);
        printf("Student Roll: ");
        scanf("%d", &students[i].roll);
        printf("Student Marks: ");
        scanf("%d", &students[i].marks);

        fprintf(fp, "%s %d %d\n", students[i].name, students[i].roll,students[i].marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");  // Reopen in read mode
    if (fp == NULL) {
        printf("Error reading file\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    struct Student temp;
    int count = 1;

    while ((fscanf(fp, "%s %d %d", temp.name, &temp.roll, &temp.marks)) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", temp.name, temp.roll, temp.marks);
        count++;
    }

    fclose(fp);

    return 0;
}
