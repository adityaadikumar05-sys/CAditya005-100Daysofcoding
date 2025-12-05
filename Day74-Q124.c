//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main() {
    FILE *source;
    FILE *dest;

    char sourceFile[256];
    char destFile[256];

    printf("Please enter the source file name: ");
    scanf("%s", sourceFile);
    printf("Please enter the destination file name: ");
    scanf("%s", destFile);
    source = fopen(sourceFile, "r");
    dest = fopen(destFile, "w");

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    fclose(source);
    fclose(dest);

    return 0;
}