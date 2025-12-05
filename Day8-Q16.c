
//Q16: Write a program to input three numbers and find the largest among them using if–else.


#include <stdio.h>

int main() {
    int a,b,c;
    int max;
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b && a >= c) {
        max = a;
    } else if (b >=c  && b >= a) {
        max = b;
    } else {
        max = c;
    }
    printf("Largest is %d\n",max);
    return 0;
}
