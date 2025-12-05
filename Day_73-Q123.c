//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <ctype.h>
#include <stdio.h>

int main() {
    char ch;
    int word_count = 0;
    int line_count = 0;
    int char_count = 0;
    int inWord = 0;

    FILE *fp;
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file input.txt\n");
        return -1;
    }

    while ((ch = getc(fp)) != EOF) {
        char_count++;
        if (ch == '\n') {
            line_count++;
        }
        if (isspace(ch)) {
            word_count++;
            inWord = 0;
        } else {
            inWord = 1;
        }
    }

    if (char_count > 0 && ch != '\n') {
        line_count++;
    }

    if (inWord) {
        word_count++;
    }

    fclose(fp);

    printf("Number of words: %d\n", word_count);
    printf("Number of lines: %d\n", line_count);
    printf("Number of characters: %d\n", char_count);

    return 0;
}
