//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum GENDER {
    MALE,
    FEMALE
};

int main() {
    char input[200];
    printf("Gender = ");
    scanf("%s", input);
    enum GENDER gender;
    if (strcmp(input, "MALE") == 0) {
        gender = MALE;
    } else if (strcmp(input, "FEMALE") == 0) {
        gender = FEMALE;
    }

    switch (gender) {
        case MALE:printf("Male\n");break;
        case FEMALE:printf("Female\n");break;
        default:printf("Invalid Input\n");
    }
    return 0;
}