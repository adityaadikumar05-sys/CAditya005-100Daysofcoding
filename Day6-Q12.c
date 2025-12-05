//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


#include <stdio.h>

int main() {
    int input;
    scanf("%d",&input);
    if ( input != 0 ) {
        if ( input > 0 ) {
            printf("Positive\n");
        } else {
            printf("Negative\n");
        }
    } else {
        printf("Zero\n");
    }
    return 0;
}