Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    int characters = 0, words = 0, lines = 0;
    char c, prev = ' ';

    while ((c = fgetc(fp)) != EOF) {
        characters++;
        if (c == '\n')
            lines++;
        if (!isspace(c) && isspace(prev))
            words++;
        prev = c;
    }

    fclose(fp);

    printf("%d %d %d", characters, words, lines);
    return 0;
}
