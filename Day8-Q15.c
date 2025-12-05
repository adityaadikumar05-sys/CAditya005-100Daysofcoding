//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char input;
    scanf(" %c", &input);

    if (input >= 'a' && input <= 'z') {
        printf("Lowercase alphabet");
    } else if (input >= 'A' && input <= 'Z') {
        printf("Uppercase alphabet");
    } else if (input >= '0' && input <= '9') {
        printf("Digit");
    } else {
        printf("Special character");
    }


    return 0;
}