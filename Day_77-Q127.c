//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <ctype.h>
#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt","r");
    if (fp == NULL) {
        printf("File Not Found\n");
        return -1;
    }
    FILE *fp2 = fopen("output.txt","w");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fprintf(fp2,"%c",ch);
    }
    return 0;
}
