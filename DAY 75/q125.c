Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    char filename[100], text[500];
    scanf("%s", filename);
    getchar();
    fgets(text, sizeof(text), stdin);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    fputs(text, fp);
    fclose(fp);

    printf("File updated successfully with appended text.");
    return 0;
}
