//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.



#include <stdio.h>

int main() {
    int input;
    scanf("%d",&input);
    int hours = input/3600;
    int minutes = (input%3600)/60;
    int seconds = input%60;
    printf("%d:%d:%d",hours,minutes,seconds);
    return 0;
}