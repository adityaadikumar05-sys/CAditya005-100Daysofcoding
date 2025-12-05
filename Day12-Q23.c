//Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main() {
    int input;
    scanf("%d",&input);
    if (input < 0) {
        printf("Invalid Input\n");
    } else if (input <= 7 ) {
        printf("Fine ₹%d\n",input*2);
    } else if (input <= 14) {
        printf("Fine ₹%d\n",input*4);
    } else if (input <= 30) {
        printf("Fine ₹%d\n",input*6);
    } else {
        printf("Membership Cancelled\n");
    }
    return 0;
}