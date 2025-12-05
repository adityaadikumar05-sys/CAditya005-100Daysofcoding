//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee empWrite, empRead;
    FILE *fp;

    printf("--- Enter Employee Details ---\n");
    printf("Enter Name: ");
    scanf("%s", empWrite.name);
    printf("Enter ID: ");
    scanf("%d", &empWrite.id);
    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &empWrite.joiningDate.day, &empWrite.joiningDate.month, &empWrite.joiningDate.year);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    if (fwrite(&empWrite, sizeof(struct Employee), 1, fp) == 1) {
        printf("\nSuccessfully wrote data to 'employee.dat'\n");
    } else {
        printf("Error writing to file.\n");
    }

    fclose(fp);


    printf("\n--- Reading from File ---\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    if (fread(&empRead, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
               empRead.name,
               empRead.id,
               empRead.joiningDate.day,
               empRead.joiningDate.month,
               empRead.joiningDate.year);
    } else {
        printf("Error reading from file.\n");
    }

    fclose(fp);

    return 0;
}