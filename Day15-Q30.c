//Q30: Write a program to reverse a given number.


#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int reversed_num=0,remainder=0;
    while(num!=0) {
        remainder = num %  10; // 4 3 2 1
        reversed_num = (reversed_num * 10) + remainder; //4 43 432 4321
        num = num / 10;//123 12 1 0
    }
    printf("%d",reversed_num);
    return 0;
}