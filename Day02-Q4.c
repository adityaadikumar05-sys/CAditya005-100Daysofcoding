//Q4: Write a program to calculate the area and circumference of a circle

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main() {
    double radius;
    double pi = 3.141592653589793;
    scanf("%lf",&radius);
    printf("Area=%.2lf, Circumferenece=%.2lf\n",pi*radius*radius,2*pi*radius);
}
