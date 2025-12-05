//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.



#include <stdio.h>

int main() {
    char input;
    scanf(" %c", &input);
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ) {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }
    return 0;
}