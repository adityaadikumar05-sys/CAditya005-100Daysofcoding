//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/


#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File Not Found\n");
        return -1;
    }
    int number = 0;
    int sum = 0;
    int count = 0;
    while (fscanf(fp, "%d", &number) != EOF) {
        sum += number;
        count++;
    }
    fclose(fp);

    float avg = (float) sum / count;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);




    return 0;
}