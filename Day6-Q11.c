//Q11: Write a program to input an integer and check whether it is even or odd using if–else.


#include <stdio.h>

int main() {
    int input;
    scanf("%d",&input);
    if ( input % 2 == 0) {
        printf("%d is even",input);
    }else {
        printf("%d is odd",input);
    }
    return 0;
}