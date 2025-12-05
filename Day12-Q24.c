//Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/

#include <stdio.h>

int main() {
    int input;
    float bill;
    scanf("%d", &input);
    if (input <= 100) {
        bill = input * 5;
    } else if (input <= 200) {
        bill = (100 * 5) + ((input-100) * 9) ;
    } else {
        bill = (100 * 5) + (100 * 9) + ((input-200)*16) ;
    }
    printf("Bill = ₹%.0f\n", bill);
    return 0;
}